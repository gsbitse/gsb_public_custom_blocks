<?php

$plugin = array(
  'title' => t('Library: Search Stanford\'s Libraries'),
  'category' => t('Content panes'),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Implements hook_PLUGIN_content_type_render().
 */
function gsb_public_custom_blocks_library_searchworks_form_content_type_render($subtype, $conf, $panel_args, $context, $incoming) {
    return (object) array(
    'title' => 'Search Stanford\'s Libraries',
    'content' => array(
    '#markup' => '<div id="tabbed_box_1" class="tabbed_box">
    <div class="tabbed_area">
       <ul class="tabs">
         <li><a href=javascript:tabSwitch("tab_1", "content_1"); id="tab_1" class="active">SearchWorks</a></li>
         <li><a href=javascript:tabSwitch("tab_2", "content_2"); id="tab_2">eJournals</a></li>
       </ul>
        <div id="content_1" class="content">
           <form title="Search form" method="get" action="http://searchworks.stanford.edu/?qt=search&amp;per_page=20&amp;q="><input id="q" class="search" name="q" size="50" type="text" placeholder="Search by title, author, or keyword" /> <input id="hidden_search_field" name="hidden_search_field" value="Search" type="hidden" /> <input id="hidden_search_field" name="hidden_search_field" value="Search" type="hidden" /> <input class="submit" value="Search" type="submit" /></form>
        </div>
        <div id="content_2" class="content">
           <form method="get" name="SS_EJPSearchForm" action="http://tc8vw9nw8j.search.serialssolutions.com.gsbproxy.stanford.edu/?V=1.0&amp;N=100&amp;L=TC8VW9NW8J&amp;S=T_W_A&amp;C="><input name="V" value="1.0" type="hidden" /> <input name="N" value="100" type="hidden" /> <input name="L" value="TC8VW9NW8J" type="hidden" /> <select name="S"> <option value="AC_T_B">Title begins with</option> <option value="AC_T_M">Title equals</option> <option selected="selected" value="T_W_A">Title contains all words</option> <option value="I_M">ISSN equals</option> </select> <input id="SS_CFocusTag" class="search" name="C" size="24" type="text" placeholder="Search by title, or keyword" /><input class="submit" value="Search" type="submit" /></form>
        </div>
    </div>',
    ),
  );
}