location / {
       try_files $uri $uri/ /index.php?/$request_uri;
}

