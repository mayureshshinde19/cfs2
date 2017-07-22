<?php

/**
 * @file
 * Default views template for displaying a slideshow.
 *
 * - $view: The View object.
 * - $options: Settings for the active style.
 * - $rows: The rows output from the View.
 * - $title: The title of this group of rows. May be empty.
 *
 * @ingroup vss_templates
 */
?>

<?php if (!empty($slideshow)): ?>
  <div class="skin-<?php print $skin; ?>">
    

    <div class="front_page_views_slideshow_wrapper">
      <div class="slideshow_content_controls">
        <?php if (!empty($top_widget_rendered)): ?>
          <div class="views-slideshow-controls-top">
            <?php print $top_widget_rendered; ?>
          </div>
        <?php endif; ?>
        <?php print $slideshow; ?>  
      </div>
      
      <?php if (!empty($bottom_widget_rendered)): ?>
        <div class="views-slideshow-controls-bottom clearfix">
          <?php print $bottom_widget_rendered; ?>
        </div>
      <?php endif; ?>
      <div class="clearfix_slideshow"></div>
    </div>
  </div>
<?php endif; ?>