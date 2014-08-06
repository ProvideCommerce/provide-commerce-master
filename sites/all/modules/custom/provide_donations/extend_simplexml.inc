<?php
class SimpleXMLExtend extends SimpleXMLElement
{
  public function addCData($nodename,$cdata_text)
  {
    $node = $this->addChild($nodename); //Added a nodename to create inside the function
    $node = dom_import_simplexml($node);
    $no = $node->ownerDocument;
    $node->appendChild($no->createCDATASection($cdata_text));
  }

  public function addAttribute($name,$value,$namespace=null)
  {
    parent::addAttribute($name,$value,$namespace);
    return $this;
  }

  public function addProcessingInstruction( $name, $value )
  {
    // Create a DomElement from this simpleXML object
    $dom_sxe = dom_import_simplexml($this);

    // Create a handle to the owner doc of this xml
    $dom_parent = $dom_sxe->ownerDocument;

    // Find the topmost element of the domDocument
    $xpath = new DOMXPath($dom_parent);
    $first_element = $xpath->evaluate('/*[1]')->item(0);

    // Add the processing instruction before the topmost element
    $pi = $dom_parent->createProcessingInstruction($name, $value);
    $dom_parent->insertBefore($pi, $first_element);
  }
}
?>