<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN"
  "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>

<head profile="<?php print $grddl_profile; ?>">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>  
  <?php print $styles; ?>
  
  <?php if (theme_get_setting('responsive_respond','corporateclean')):
  global $base_path; global $base_root; ?>
  <!--[if lt IE 9]>
  <script src="<?php print $base_root . $base_path . path_to_theme() ?>/js/respond.min.js"></script>
  <![endif]-->
  <?php endif; ?>
  
  <?php print $scripts; ?>

</head>
<body class="<?php print $classes; ?>" <?php print $attributes;?>>
  
</body>
</html>
