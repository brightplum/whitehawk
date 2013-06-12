<?php

function whg_features_sync_status_codes_form() {
    $form = array();
    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => 'Go',
    );

    return $form;
}

function whg_features_sync_status_codes_form_submit($form, &$form_state) {
    $batch = whg_features_sync_status_codes();
    batch_set($batch);
}