<?php

function __($str) {
    global $lang;
    
    if ($lang[$str] != "")
        return $lang[$str];
    else
        return $str;
}

function _e($str) {
    echo __($str);
}

// get session variable if it exists
function _s($key) {
    if (isset($_SESSION[$key])) echo $_SESSION[$key];
}
?>
