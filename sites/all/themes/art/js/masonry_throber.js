(function($) {
  Drupal.behaviors.masonry_throber = {
    attach: function(context, settings) {
      $.each(Drupal.settings.masonry, 
        function (container, settings) {
          if (settings.images_first) {
            $(container).imagesLoaded()
              .always(function(instance) {
                $(container).removeClass('throbber');
              });
          }
        }
      );
    }
  };
})(jQuery);
