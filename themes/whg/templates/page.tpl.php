<?php
/**
 * @file
 * WHG template to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 */
?>

<div id="wrapper">
  <div id="header">

    <div class="top-block">
      <div class="top-holder">

        <!-- ***************** - Top Toolbar Left Side - ***************** -->
        <div class="sub-nav">
          <ul>
            <li><a href="/">Home</a></li>
            <li><a href="/contact">Contact</a></li>
          </ul></div><!-- end sub-nav -->
        <!-- ***************** - END Top Toolbar Left Side - ***************** -->

        <!-- ***************** - Top Toolbar Right Side - ***************** -->
        <div class="sub-nav2">
          <ul>
            <li><a href="/sitemap">Sitemap</a></li>
          </ul>
        </div><!-- end sub-nav2 -->
        <!-- ***************** - END Top Toolbar Right Side - ***************** -->

      </div> <!-- /top-holder -->
    </div> <!-- /top-block -->

    <div class="header-holder">
      <div class="rays">
        <div class="header-area">

          <?php if ($logo): ?>
          <!-- ***************** - LOGO - ***************** -->
          <a href="/" class="logo"><img src="<?php print $logo; ?>" alt="The White Hawk Group" /></a>
          <!-- ***************** - END LOGO - ***************** -->
          <?php endif; ?>


          <?php if ($page['navigation']): ?>
          <!-- ***************** - Main Navigation - ***************** -->
          <?php print render($page['navigation']); ?>
          <!-- ***************** - END Main Navigation - ***************** -->
          <?php endif; ?>

        </div> <!-- /header-area -->
      </div> <!-- /rays -->
    </div> <!-- /header-holder -->
  </div> <!-- /header -->

  <div id="main">
  <div class="main-area">

    <!-- ***************** - START Title Bar - ***************** -->
    <!-- <div class="tools">
      <div class="holder">
        <div class="frame">
          <h1><?php //print $title ?></h1>

          <?php //print render($search_form); ?>

          <?php //if ($breadcrumb): ?>
          <p class="breadcrumb"><?php //print $breadcrumb; ?></p>
          <?php //endif; ?>
        </div><!-- end frame

      </div><!-- end holder
    </div><!-- end tools -->
    <!-- ***************** - END Title Bar - ***************** -->

    <div class="main-holder">

      <?php if ($page['left_sidebar']) : ?>
      <!-- ***************** - START sub-nav - ***************** -->
      <div id="sub_nav">
        <?php print render($page['left_sidebar']); ?>
      </div><!-- end sub_nav -->

      <!-- ***************** - END sub-nav - ***************** -->
      <?php endif; ?>

      <!-- ***************** - START Content - ***************** -->
      <div id="content" class="<?php if (isset($content_classes)) print $content_classes; ?>">

        <?php if ($page['help'] || ($messages)): ?>
          <div id="console">
            <?php print render($page['help']); ?>
            <?php if ($messages): print $messages; endif; ?>
          </div>
          <br />
        <?php endif; ?>
        <div id="horizontal_nav">
        <?php if ($primary_local_tasks): ?><ul class="links primary-local-tasks"><?php print render($primary_local_tasks) ?></ul><?php endif; ?>
        </div>
        <?php if ($secondary_local_tasks): ?><ul class="links secondary-local-tasks"><?php print render($secondary_local_tasks) ?></ul><?php endif; ?>
        <?php if ($page['content_top']): ?>
          <?php print render($page['content_top']) ?>
        <?php endif; ?>

        <?php print render($page['content']) ?>

        <?php if ($page['content_bottom']) : ?>
          <?php print render($page['content_bottom']) ?>
        <?php endif; ?>

      </div><!-- end content -->
      <!-- ***************** - END content - ***************** -->

      <?php if ($page['right_sidebar']) : ?>
      <!-- ***************** - START sidebar - ***************** -->
      <div id="sidebar">
        <?php print render($page['right_sidebar']); ?>
      </div><!-- end sidebar -->

      <!-- ***************** - END sidebar - ***************** -->
      <?php endif; ?>

    </div><!-- end main-holder -->
  </div><!-- main-area -->

  <?php if ($page['footer']) : ?>
  <!-- ***************** - Top Footer - ***************** -->
  <div id="footer">
    <div class="footer-area">
      <div class="footer-wrapper">
        <div class="footer-holder">

          <!-- /***************** - Footer Content Starts Here - ***************** -->
          <?php print render($page['footer']) ?>
          <!-- ***************** - END Footer Content - ***************** -->

        </div><!-- footer-holder -->
      </div><!-- end footer-wrapper -->
    </div><!-- end footer-area -->
  </div><!-- end footer -->
  <!-- /***************** - END Top Footer Area - ***************** -->
  <?php endif; ?>

  <!-- /***************** - Bottom Footer - ***************** -->

  <div id="footer_bottom">
    <div class="info">
      <div id="foot_left"><p>Copyright &copy; 2012 The White Hawk Group. All rights reserved.</p>
      </div><!-- end foot_left -->


      <div id="foot_right">
        <div class="top-footer"><a href="#" class="link-top">top</a></div>

        <ul>
          <li><a href="/">Home</a></li>
          <li><a href="/contact">Contact</a></li>
        </ul>
      </div><!-- end foot_right -->
    </div><!-- end info -->
  </div><!-- end footer_bottom -->

  <!-- /***************** - END Bottom Footer - ***************** -->

  </div><!-- end main -->
</div> <!-- /wrapper -->
