<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
    <?php print render($page['top']); ?>

<div id="page">
  <header class="header" id="header" role="banner">
      <div class="wrapper-header">
          <div class="wrapper-header-inside">

    <?php if ($logo): ?>
      <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" />
        <div class="logo-mobile he"><img src="/sites/all/themes/art/images/logo-mobile.png"></div>
      </a>
    <?php endif; ?>

    <?php if ($site_name || $site_slogan): ?>
      <div class="header__name-and-slogan" id="name-and-slogan">
        <?php if ($site_name): ?>
          <h1 class="header__site-name" id="site-name">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
          </h1>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
    <?php endif; ?>

    <?php if ($secondary_menu): ?>
      <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
        <?php print theme('links__system_secondary_menu', array(
          'links' => $secondary_menu,
          'attributes' => array(
            'class' => array('links', 'inline', 'clearfix'),
          ),
          'heading' => array(
            'text' => $secondary_menu_heading,
            'level' => 'h2',
            'class' => array('element-invisible'),
          ),
        )); ?>
      </nav>
    <?php endif; ?>

    <?php print render($page['header']); ?>
</div>
<!--
    <?php if ( !empty($node) ) {?>
    <div class="social-button">
      <img src="/sites/all/themes/art/images/share.png">
      <span class="line1"></span>
      <span class="line3"></span>
    </div>
    <?php } ?>
-->
  </div>
  </header>
<!--
<?php if ( !empty($node) ) {?>
    <div id="share-mobile" class="hide">
        <div class="facebook link">
            <a href="https://www.facebook.com/sharer/sharer.php?u=http://<?php echo $_SERVER['HTTP_HOST'];?>/node/<?php print $node->nid ?>" onclick="javascript:window.open(this.href,
        '', 'menubar=no,toolbar=no,resizable=yes,scrollbars=yes,height=600,width=600');return false;">
              <div class="image"><img src="/sites/all/themes/art/images/facebook-mobile.png" alt="Share on Facebook"></div>
              <div class="text"><?php print t("Facebook"); ?></div>
              </a>
        </div>
        <div class="twitter link">
            <a href="https://twitter.com/home?status=http://<?php echo $_SERVER['HTTP_HOST'];?>/node/<?php print $node->nid ?>" onclick="javascript:window.open(this.href,
            '', 'menubar=no,toolbar=no,resizable=yes,scrollbars=yes,height=600,width=600');return false;">
            <div class="image"><img src="/sites/all/themes/art/images/twitter-mobile.png" alt="Share on Twitter"/></div>
                <?php print t("Twitter"); ?>
            </a>
        </div>
                <div class="pinterest link">
          <a href="javascript:void((function()%7Bvar%20e=document.createElement('script');e.setAttribute('type','text/javascript');e.setAttribute('charset','UTF-8');e.setAttribute('src','http://assets.pinterest.com/js/pinmarklet.js?r='+Math.random()*99999999);document.body.appendChild(e)%7D)());">
              <div class="image"><img src="/sites/all/themes/art/images/pinterest-mobile.png" alt="Pinterest" /></div>
              <?php print t("Pinterest"); ?>
          </a>
        </div>
        <div class="mail link">
          <a href="/forward?path=node/<?php print $node->nid; ?>">
              <div class="image"><img src="/sites/all/themes/art/images//mail-mobile.png" alt="Email" /></div>
              <?php print t("Mail"); ?>
          </a>
        </div>
    </div>
    <div class="share-triangle hide"></div>
<?php } ?>
-->
  <div class="menu-wrapper">
      <div class="menu-inside-wrapper">

      <div class="menu-button">
        <div class="text"><?php print t("Menu"); ?></div>
        <div class="lines">
          <span class="line1"></span>
          <span class="line2"></span>
          <span class="line3"></span>
        </div>
      </div>
    </div>
    </div>
    <div id="navigation" class="close-menu">

      <?php if ($main_menu): ?>
      <div class="wrapper-width">
        <nav id="main-menu" class="hide" role="navigation" tabindex="-1">
          <?php
          // This code snippet is hard to modify. We recommend turning off the
          // "Main menu" on your sub-theme's settings form, deleting this PHP
          // code block, and, instead, using the "Menu block" module.
          // @see https://drupal.org/project/menu_block
          print theme('links__system_main_menu', array(
            'links' => $main_menu,
            'attributes' => array(
              'class' => array('links', 'inline', 'clearfix'),
            ),
            'heading' => array(
              'text' => t('Main menu'),
              'level' => 'h2',
              'class' => array('element-invisible'),
            ),
          )); ?>
        </nav>
      </div>
      <?php endif; ?>

      <?php print render($page['navigation']); ?>
      <div id="square" class="hide"></div>
      <div id="triangle-topleft" class="hide"></div>
    </div>
    
  <div id="main">

    <div id="content" class="column" role="main">
      <?php print render($page['highlighted']); ?>
      <?php print $breadcrumb; ?>
      <?php print render($tabs); ?>
      <a id="main-content"></a>
      <?php print render($page['content-top']); ?>
      <?php print render($title_prefix); ?>
      <?php print render($title_suffix);
      if(arg(0) == 'taxonomy' && arg(1) == 'term') {?>
        <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
      <?php } ?>
      <?php print $messages; ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print render($page['content-bottom']); ?>
      <?php print $feed_icons; ?>
    </div>



    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>


</div>

  <div class="top-button"><?php print t("Back to Top")?></div>


<?php print render($page['footer']); ?>

<?php print render($page['bottom']); ?>
