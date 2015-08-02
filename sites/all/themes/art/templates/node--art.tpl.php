<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>


<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
<div class="right">

<div id="wrapper-title">
    <?php print render($content['field_artis']); ?>
    <h1 class="page__title title" id="page-title"><?php print $title; ?>, </h1>
    <?php print render($content['field_art_date']);  ?>
</div>

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
        <p class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </p>
      <?php endif; ?>

      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>
  <?php endif; ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
  ?>
    <div class="place">
    <?php print render($content['field_campus']); 
    print render($content['field_art_location_text']); ?>
    </div>
    <div class="details">
      <?php print render($content['field_material']); 
      print render($content['field_sizes']); ?>
    </div>
  </div>
  <div class="clear">
    <?php print render($content['field_text']); ?>

<div id="share">
  <div class="pinterest link">
    <a href="javascript:void((function()%7Bvar%20e=document.createElement('script');e.setAttribute('type','text/javascript');e.setAttribute('charset','UTF-8');e.setAttribute('src','http://assets.pinterest.com/js/pinmarklet.js?r='+Math.random()*99999999);document.body.appendChild(e)%7D)());">
        <img src="/sites/all/themes/art/images/pinterest.png" alt="Pinterest" />
    </a>
  </div>
  <div class="facebook link">
      <a href="https://www.facebook.com/sharer/sharer.php?u=http://<?php echo $_SERVER['HTTP_HOST'];?>/node/<?php print $node->nid ?>" onclick="javascript:window.open(this.href,
  '', 'menubar=no,toolbar=no,resizable=yes,scrollbars=yes,height=600,width=600');return false;"><img
  src="/sites/all/themes/art/images/facebook.png" alt="Share on Facebook"/></a>
  </div>
  <div class="twitter link">
      <a href="https://twitter.com/home?status=http://<?php echo $_SERVER['HTTP_HOST'];?>/node/<?php print $node->nid ?>" onclick="javascript:window.open(this.href,
      '', 'menubar=no,toolbar=no,resizable=yes,scrollbars=yes,height=600,width=600');return false;"><img
      src="/sites/all/themes/art/images/twitter.png" alt="Share on Twitter"/>
      </a>
  </div>
  <div class="mail link">
    <a href="/forward?path=node/<?php print $node->nid; ?>">
        <img src="/sites/all/themes/art/images//mail.png" alt="Email" />
    </a>
  </div>
</div>

</div> 



  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
