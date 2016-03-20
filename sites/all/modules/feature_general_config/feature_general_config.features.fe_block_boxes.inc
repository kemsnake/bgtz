<?php
/**
 * @file
 * feature_general_config.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function feature_general_config_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'footer text';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_text';
  $fe_block_boxes->body = '<hr /><table border="0" cellpadding="1" cellspacing="1" style="width: 100%; border:none!important;"><tbody style="border:none!important;"><tr style="border:none!important;"><td><p style="text-align: center;"><span style="font-size:16px;"><span style="color:#006633;"><u><strong><em><span style="font-family:georgia,serif;">ООО &laquo;Бюро градостроительства, технической инвентаризации и землеустройства&raquo;&nbsp;</span></em></strong></u></span></span></p><p style="text-align: center;"><span style="font-size:12px;"><strong><span style="text-align: justify; line-height: 1.538em;">Кемеровская обл.,<span style="line-height: 1.538em;">&nbsp;г. Березовский, </span>пр-кт Ленина, 39А, каб.1 &nbsp; &nbsp;</span><span style="line-height: 1.538em;">Тел. +7(38445) 3-69-32, +7(38445) 3-30-18, 8-904-996-06-14 &nbsp; &nbsp; &nbsp;</span><span style="text-align: justify; line-height: 1.538em;">&nbsp;</span><span style="line-height: 1.538em;">e-mail :&nbsp;</span><a href="mailto:bgtiz@mail.ru" style="font-family: georgia, serif; line-height: 1.538em; font-size: 12px;">bgtiz@mail.ru</a></strong></span></p><p style="text-align: center;"><span style="font-size:16px;"><span style="color:#008000;"><strong><span style="font-family:georgia,serif;"><em>Мы всегда рады помочь Вам!!!</em></span></strong></span></span></p></td><td><!--LiveInternet counter--><script type="text/javascript">
<!--//--><![CDATA[// ><!--
<!--
document.write("<a href=\'/web/20150206154431//web/20150811144505/http://www.liveinternet.ru/click\' "+
"target=_blank><img src=\'//counter.yadro.ru/hit?t27.6;r"+
escape(document.referrer)+((typeof(screen)=="undefined")?"":
";s"+screen.width+"*"+screen.height+"*"+(screen.colorDepth?
screen.colorDepth:screen.pixelDepth))+";u"+escape(document.URL)+
";"+Math.random()+
"\' alt=\'\' title=\'LiveInternet: показано количество просмотров и"+
" посетителей\' "+
"border=\'0\' width=\'88\' height=\'120\'><\\/a>")
//-->
//--><!]]>
</script>';

  $export['footer_text'] = $fe_block_boxes;

  return $export;
}
