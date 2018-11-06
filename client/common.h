//
// Created by maqian on 2018/11/1.
//

#ifndef TUNNEL_COMMON_H
#define TUNNEL_COMMON_H

#include <stdlib.h>
#include "client.h"
#include "../common/global.h"

struct connection *create_conn(int fd, int type, void *ptr);

void tag_close_conn(struct connection *conn, Array arr);

int close_conn(struct connection *conn);

void close_conn_arr(Array arr);

int write_data(struct connection *conn, const void *buf, size_t len);

#endif //TUNNEL_COMMON_H