Drupal.behaviors.gsbPublicCustomBlocks = {
    attach: function () {
      jQuery('.field-group-tab-wrapper li.vertical-tab-button a').hover(function(){jQuery(this).click();});
      jQuery('.field-group-tab-wrapper li.vertical-tab-button a').click(function(){window.location.hash = jQuery(this).find('strong').text()});
      jQuery('.field-group-tab-wrapper li.vertical-tab-button a strong').each(function (index) {
        var text = jQuery(this).text();
        jQuery(this).parent('a').attr('href', '#' + text);
        if (window.location.hash && !Drupal.settings.gsb_public_custom_blocks) {
          //open tab if anchor present
          var anchor = window.location.hash;
          anchor = anchor.replace('%20', ' ');
          if (anchor === '#' + text) {
            jQuery(this).parent('a').click();
          }
        }
      });
      Drupal.settings.gsb_public_custom_blocks = {};
      Drupal.settings.gsb_public_custom_blocks.activated = true;
    }
};