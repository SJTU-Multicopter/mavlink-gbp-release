// MESSAGE EXTRA_FUNCTION support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief EXTRA_FUNCTION message
 *
 * Message to send bool variables
 */
struct EXTRA_FUNCTION : mavlink::Message {
    static constexpr msgid_t MSG_ID = 236;
    static constexpr size_t LENGTH = 5;
    static constexpr size_t MIN_LENGTH = 5;
    static constexpr uint8_t CRC_EXTRA = 192;
    static constexpr auto NAME = "EXTRA_FUNCTION";


    uint8_t obs_avoid_enable; /*< bool for obstacle avoidance */
    uint8_t laser_height_enable; /*< bool for control height by laser */
    uint8_t add_one; /*< additional function bool 1 */
    uint8_t add_two; /*< additional function bool 2 */
    uint8_t add_three; /*< additional function bool 3 */


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
        ss << "  obs_avoid_enable: " << +obs_avoid_enable << std::endl;
        ss << "  laser_height_enable: " << +laser_height_enable << std::endl;
        ss << "  add_one: " << +add_one << std::endl;
        ss << "  add_two: " << +add_two << std::endl;
        ss << "  add_three: " << +add_three << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << obs_avoid_enable;              // offset: 0
        map << laser_height_enable;           // offset: 1
        map << add_one;                       // offset: 2
        map << add_two;                       // offset: 3
        map << add_three;                     // offset: 4
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> obs_avoid_enable;              // offset: 0
        map >> laser_height_enable;           // offset: 1
        map >> add_one;                       // offset: 2
        map >> add_two;                       // offset: 3
        map >> add_three;                     // offset: 4
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
