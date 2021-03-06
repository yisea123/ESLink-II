#ifndef __OFFLINE_FILE_H__
#define __OFFLINE_FILE_H__

#include "offline_def.h"
#include "errno.h"


error_t ofl_file_init(uint8_t mode);

error_t ofl_file_open(char *path);
error_t ofl_file_write_start(void);
error_t ofl_file_write(const uint8_t *buf, uint32_t size);
error_t ofl_file_write_end(void);

error_t ofl_file_read_start(void);
error_t ofl_file_read(uint32_t addr, uint8_t *data, uint32_t len);
error_t ofl_file_read_end(void);

error_t ofl_file_delete(uint8_t num);
error_t delete_current_ofl_file(void);

error_t get_all_ofl_file(void);
error_t get_ofl_file_info(uint8_t num, uint8_t *data);
error_t get_ofl_file_name(uint8_t num, char *data);
error_t get_ofl_file_num(uint8_t *data);
//error_t get_ofl_file_checksum(uint8_t type, uint8_t *data);
error_t ofl_file_get_timing_checksum(uint8_t *data);
error_t ofl_file_get_cfg_word_checksum(uint8_t *data);
error_t ofl_file_get_image_checksum(uint8_t *data);

void ofl_file_init_partition(void);
void ofl_file_add_partition(partition_t *part);
error_t ofl_file_save_partition(void);
void ofl_file_set_type(uint32_t type);
error_t ofl_file_get_partition(char *path, ofl_file_partition *partition);
error_t ofl_file_lseek_write(char *path, uint32_t addr, uint8_t *buf, uint32_t size);
error_t ofl_file_get_free(void);
#endif
