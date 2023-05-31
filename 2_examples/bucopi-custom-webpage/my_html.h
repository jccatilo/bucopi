char html_code[] = 
"<!DOCTYPE HTML>"
"<html>"
"<head>"
"<meta charset=\"utf-8\">"
"<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">"
"<meta name=\"viewport\" content=\"width=device-width,initial-scale=1\">"
"<script src=\"https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js\"></script>"
"<title>BUCO PI Remote Relay Control</title>"
"<style>"
".switch{position:relative;display:inline-block;width:60px;height:34px;}"
".switch input {display:none;}"
".slider{position:absolute;cursor:pointer;top:0;left:0;right:0;bottom:0;background-color:#ccc;-webkit-transition:.4s;transition:.4s;}"
".slider:before{position:absolute;content:\"\";height:26px;width:26px;left:4px;bottom:4px;background-color:white;-webkit-transition:.4s;transition:.4s;}"
"input:checked + .slider{background-color:#2196F3;}"
"input:focus + .slider{box-shadow:0 0 1px #2196F3;}"
"input:checked + .slider:before{-webkit-transform:translateX(26px);-ms-transform:translateX(26px);transform:translateX(26px);}"
".slider.round{border-radius:34px;}"
".slider.round:before{border-radius:50%;}"
"</style>"
"</head>"
"<body>"
"<h1>Remote Relay Control</h1>"
"<form action=\"?\" method=\"post\">"
"<label class=\"switch\">"
"<input type=\"checkbox\" name=\"switch_1\" value=\"on\" onchange=\"this.form.submit()\">"
"<span class=\"slider round\"></span>"
"</label>"
"<input type=\"hidden\" name=\"switch_1\" value=\"off\" onchange=\"this.form.submit()\">"
"</form>"
"</body>"
"</html>";



char html_off[] = 
"<!DOCTYPE HTML>"
"<html>"
"<head>"
"<meta charset=\"utf-8\">"
"<meta http-equiv=\"X-UA-Compatible\" content=\"IE=edge\">"
"<meta name=\"viewport\" content=\"width=device-width,initial-scale=1\">"
"<script src=\"https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js\"></script>"
"<title>BUCO PI Remote Relay Control</title>"
"<style>"
".switch{position:relative;display:inline-block;width:60px;height:34px;}"
".switch input {display:none;}"
".slider{position:absolute;cursor:pointer;top:0;left:0;right:0;bottom:0;background-color:#ccc;-webkit-transition:.4s;transition:.4s;}"
".slider:before{position:absolute;content:\"\";height:26px;width:26px;left:4px;bottom:4px;background-color:white;-webkit-transition:.4s;transition:.4s;}"
"input:checked + .slider{background-color:#2196F3;}"
"input:focus + .slider{box-shadow:0 0 1px #2196F3;}"
"input:checked + .slider:before{-webkit-transform:translateX(26px);-ms-transform:translateX(26px);transform:translateX(26px);}"
".slider.round{border-radius:34px;}"
".slider.round:before{border-radius:50%;}"
"</style>"
"</head>"
"<body>"
"<h1>Remote Relay Control</h1>"
"<form action=\"?\" method=\"post\">"
"<label class=\"switch\">"
"<input type=\"checkbox\" name=\"switch_1\" value=\"off\" onchange=\"this.form.submit()\" checked>"
"<span class=\"slider round\"></span>"
"</label>"
"<input type=\"hidden\" name=\"switch_1\" value=\"off\" onchange=\"this.form.submit()\">"
"</form>"
"</body>"
"</html>";