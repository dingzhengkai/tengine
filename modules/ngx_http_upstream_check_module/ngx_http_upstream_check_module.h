#define NGX_HAVE_HTTP_UPSTREAM_CHECK

ngx_uint_t ngx_http_upstream_check_add_peer(
        ngx_conf_t *cf, 
        ngx_http_upstream_srv_conf_t *us, 
        ngx_addr_t *peer_addr);

ngx_uint_t ngx_http_upstream_check_peer_down(ngx_uint_t index);

