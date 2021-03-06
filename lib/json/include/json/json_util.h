/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/**
 * @file json_util.h
 * @author UWB Core <uwbcore@gmail.com>
 * @date  Apr 10 2020
 * @brief
 *
 */

#ifndef _JSON_UTIL_H_
#define _JSON_UTIL_H_

#include <json/json.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct json_status{
    uint16_t selfmalloc:1;
    uint16_t initialized:1;
    uint16_t valid:1;
}json_status_t;

typedef struct json_decoder{
        /* json_buffer must be first element in the structure */
        struct json_buffer json_buf;
        char * start_buf;
        char * end_buf;
        int current_position;
}json_decoder_t;

int json_write(void *buf, char* data, int len);
int json_readn(struct json_buffer * jb, char *buf, int size);
char json_read_prev(struct json_buffer * jb);
char json_read_next(struct json_buffer * jb);

#ifdef __cplusplus
}
#endif
#endif
