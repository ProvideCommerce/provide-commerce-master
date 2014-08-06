<form name="contactform" id="jb_addComment" method="post" action="actions/add.php">
    <h3>
        <?php _e('Add Comment'); ?>
    </h3>
    <fieldset>
        <input type="hidden" id="_ajax" name="_ajax" value="false"/>
        <label for="name">
            <?php _e('Name'); ?>:
        </label>
        <input id="name" name="name" type="text" value="<?php _s('form_name'); ?>"/>
        <label for="website">
            <?php _e('Email'); ?>:
        </label>
        <input id="website" name="website" type="text" value="<?php _s('form_website'); ?>"/>
        <label for="comment">
            <?php _e('Comment'); ?>:
        </label>
        <textarea id="comment" rows="" cols="" name="comment"><?php echo _s('form_comment'); ?></textarea>
        <label class="hidden" for="jbemail">
            <?php _e('Do not fill out this field.'); ?>
        </label>
        <input class="hidden" id="jbemail" name="jbemail" type="text" value=""/>
        <input type="submit" name="submit" class="button" value="<?php _e('Add it'); ?>"/>
    </fieldset>
</form>
