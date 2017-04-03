// MESSAGE PUMP_CONTROLLER support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief PUMP_CONTROLLER message
 *
 * Message to control pump
 */
struct PUMP_CONTROLLER : mavlink::Message {
    static constexpr msgid_t MSG_ID = 234;
    static constexpr size_t LENGTH = 8;
    static constexpr size_t MIN_LENGTH = 8;
    static constexpr uint8_t CRC_EXTRA = 24;
    static constexpr auto NAME = "PUMP_CONTROLLER";


    float pump_speed_sp; /*< pump */
    float spray_speed_sp; /*< spray */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  pump_speed_sp: " << pump_speed_sp << std::endl;
        ss << "  spray_speed_sp: " << spray_speed_sp << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << pump_speed_sp;                 // offset: 0
        map << spray_speed_sp;                // offset: 4
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> pump_speed_sp;                 // offset: 0
        map >> spray_speed_sp;                // offset: 4
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
