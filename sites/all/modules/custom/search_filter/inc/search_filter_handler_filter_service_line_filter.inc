<?php

/**
 * Options form subform for setting exposed filter options.
 */
class search_filter_handler_filter_service_line_filter extends views_handler_filter {
  /**
    * Shortcut to display the exposed options form.
    */
  function value_form(&$form, &$form_state) {
  	//parent::value_form($form, $form_state);
        //$options = menu_parent_options(menu_get_menus(FALSE), 1);
        // $form['value'] = array(
        //     '#type' => 'textfield',
        //     '#title' => t('Term Name'),
        //     '#default_value' => NULL,
        // );
  	echo '<pre>';
  	print_r($form);
  	echo '</pre>';
  	exit();
    //return $form;
    }
}