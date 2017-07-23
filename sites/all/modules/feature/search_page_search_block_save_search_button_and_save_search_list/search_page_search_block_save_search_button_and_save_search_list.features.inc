<?php
/**
 * @file
 * search_page_search_block_save_search_button_and_save_search_list.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function search_page_search_block_save_search_button_and_save_search_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function search_page_search_block_save_search_button_and_save_search_list_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function search_page_search_block_save_search_button_and_save_search_list_default_search_api_index() {
  $items = array();
  $items['site_search_index'] = entity_import('search_api_index', '{
    "name" : "site search index",
    "machine_name" : "site_search_index",
    "description" : null,
    "server" : "database_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "blog", "forum", "documents", "event", "news" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "comments" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "comment" },
        "field_document_type" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_document_type:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_document_type:parent" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_document_type:parent:name" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_document_type:parent:parent" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_document_type:parent:parents_all" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_document_type:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_tags:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_tags:parent" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_tags:parent:name" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_tags:parent:parent" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_tags:parent:parents_all" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_tags:parent:vocabulary" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_vocabulary"
        },
        "field_tags:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_tags:vocabulary" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "taxonomy_vocabulary"
        },
        "field_tower_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_tower_type:name" : { "type" : "text" },
        "field_tower_type:parent" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_tower_type:parent:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_tower_type:parent:parent" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_tower_type:parent:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_tower_type:parents_all" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_tower_type:vocabulary" : { "type" : "integer", "entity_type" : "taxonomy_vocabulary" },
        "field_upload_file:file" : { "type" : "integer", "entity_type" : "file" },
        "field_upload_file:file:name" : { "type" : "text" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "taxonomy_forums" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "author" : true,
              "field_tags" : true,
              "taxonomy_forums" : true,
              "field_document_type" : true,
              "field_tower_type" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_tags:name" : true,
              "field_tower_type:name" : true,
              "field_tags:parent:name" : true,
              "field_upload_file:file:name" : true,
              "field_tower_type:parent:name" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_tags:name" : true,
              "field_tower_type:name" : true,
              "field_tags:parent:name" : true,
              "field_upload_file:file:name" : true,
              "field_tower_type:parent:name" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_tags:name" : true,
              "field_tower_type:name" : true,
              "field_tags:parent:name" : true,
              "field_upload_file:file:name" : true,
              "field_tower_type:parent:name" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_tags:name" : true,
              "field_tower_type:name" : true,
              "field_tags:parent:name" : true,
              "field_upload_file:file:name" : true,
              "field_tower_type:parent:name" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "fields" : {
              "title" : true,
              "body:value" : true,
              "body:summary" : true,
              "field_tags:name" : true,
              "field_tower_type:name" : true,
              "field_tags:parent:name" : true,
              "field_upload_file:file:name" : true,
              "field_tower_type:parent:name" : true
            },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_saved_searches_settings().
 */
function search_page_search_block_save_search_button_and_save_search_list_default_search_api_saved_searches_settings() {
  $items = array();
  $items['site_search_index'] = entity_import('search_api_saved_searches_settings', '{
    "delta" : "site_search_index",
    "index_id" : "site_search_index",
    "enabled" : "1",
    "options" : {
      "description" : "",
      "registered_choose_mail" : 0,
      "choose_name" : 0,
      "registered_user_delete_key" : 0,
      "show_empty_list" : 0,
      "allow_keys_change" : 0,
      "default_true" : true,
      "ids_list" : [],
      "user_select_interval" : 0,
      "interval_options" : { "86400" : "Daily", "604800" : "Weekly" },
      "set_interval" : "-1",
      "mail" : {
        "activate" : {
          "send" : 0,
          "title" : "Activate your saved search at [site:name]",
          "body" : "A saved search on [site:name] with this e-mail address was created.\\r\\nTo activate this saved search, click the following link:\\r\\n\\r\\n[search-api-saved-search:activate-url]\\r\\n\\r\\nIf you didn\\u0027t create this saved search, just ignore this mail and it will be deleted.\\r\\n\\r\\n--  [site:name] team"
        },
        "notify" : {
          "send" : 0,
          "title" : "New results for your saved search at [site:name]",
          "body" : "[user:name],\\r\\n\\r\\nThere are new results for your saved search on [site:name]:\\r\\n\\r\\n[search-api-saved-searches:results]\\r\\n\\r\\nYou can configure your saved searches at the following address:\\r\\n[user:search-api-saved-searches-url]\\r\\n\\r\\n--  [site:name] team",
          "results" : "New results for search \\u0022[search-api-saved-search:name]\\u0022:\\r\\n[search-api-saved-search:items]\\r\\n[search-api-saved-search:results-capped]",
          "result" : "[search-api-saved-search-result:label] ([search-api-saved-search-result:url])",
          "max_results" : "0",
          "results_capped" : "\\u2026\\r\\nView all results: [search-api-saved-search:view-url]"
        }
      },
      "manual" : {
        "allow" : 0,
        "fulltext" : 0,
        "fields" : [],
        "page" : { "path" : "", "fulltext" : "", "direct_filter_params" : "0" }
      }
    },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function search_page_search_block_save_search_button_and_save_search_list_default_search_api_server() {
  $items = array();
  $items['database_server'] = entity_import('search_api_server', '{
    "name" : "database server",
    "machine_name" : "database_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 1,
      "indexes" : { "site_search_index" : {
          "nid" : {
            "table" : "search_api_db_site_search_index",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_site_search_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_site_search_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_site_search_index",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "comments" : {
            "table" : "search_api_db_site_search_index_comments",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_site_search_index_field_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "taxonomy_forums" : {
            "table" : "search_api_db_site_search_index",
            "column" : "taxonomy_forums",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_document_type" : {
            "table" : "search_api_db_site_search_index_field_document_type",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_tower_type" : {
            "table" : "search_api_db_site_search_index",
            "column" : "field_tower_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_site_search_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_site_search_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "body:summary" : {
            "table" : "search_api_db_site_search_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_tags:name" : {
            "table" : "search_api_db_site_search_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_tags:parent" : {
            "table" : "search_api_db_site_search_index_field_tags_parent",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_tags:parents_all" : {
            "table" : "search_api_db_site_search_index_field_tags_parents_all",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_upload_file:file" : {
            "table" : "search_api_db_site_search_index",
            "column" : "field_upload_file_file",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_tower_type:name" : {
            "table" : "search_api_db_site_search_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_tower_type:parent" : {
            "table" : "search_api_db_site_search_index_field_tower_type_parent",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_tower_type:parents_all" : {
            "table" : "search_api_db_site_search_index_field_tower_type_parents_all",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_tags:parent:name" : {
            "table" : "search_api_db_site_search_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_tags:parent:parent" : {
            "table" : "search_api_db_site_search_index_field_tags_parent_parent",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_tags:parent:parents_all" : {
            "table" : "search_api_db_site_search_index_field_tags_parent_parents_all",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_upload_file:file:name" : {
            "table" : "search_api_db_site_search_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_tower_type:parent:name" : {
            "table" : "search_api_db_site_search_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_tower_type:parent:parent" : {
            "table" : "search_api_db_site_search_index_field_tower_type_parent_parent",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_tower_type:parent:parents_all" : {
            "table" : "search_api_db_site_search_index_field_tower_type_parent_pare_1",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_tags:vocabulary" : {
            "table" : "search_api_db_site_search_index_field_tags_vocabulary",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_tower_type:vocabulary" : {
            "table" : "search_api_db_site_search_index",
            "column" : "field_tower_type_vocabulary",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_tags:parent:vocabulary" : {
            "table" : "search_api_db_site_search_index_field_tags_parent_vocabulary",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_document_type:parent:name" : {
            "table" : "search_api_db_site_search_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_document_type:parent:parent" : {
            "table" : "search_api_db_site_search_index_field_document_type_parent_par",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_document_type:parent:parents_all" : {
            "table" : "search_api_db_site_search_index_field_document_type_parent_p_1",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_document_type:parent" : {
            "table" : "search_api_db_site_search_index_field_document_type_parent",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_document_type:parents_all" : {
            "table" : "search_api_db_site_search_index_field_document_type_parents_al",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_document_type:name" : {
            "table" : "search_api_db_site_search_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
