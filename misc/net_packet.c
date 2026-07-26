#include <stdio.h>
#include <stdint.h>

struct NetworkPacket {
    uint32_t header_id;
    uint8_t packet_type;
    union {
        struct {
            uint32_t ack_number;
        } control;
        
        struct {
            uint16_t data_length;
            uint8_t payload[512];
        } data;
    } payload;
};


int main(){

    return 0;
}
