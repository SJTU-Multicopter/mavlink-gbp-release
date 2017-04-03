// MESSAGE SONAR_DISTANCE support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief SONAR_DISTANCE message
 *
 * sonar distance value from drone, by Clarence
 */
struct SONAR_DISTANCE : mavlink::Message {
    static constexpr msgid_t MSG_ID = 212;
    static constexpr size_t LENGTH = 28;
    static constexpr size_t MIN_LENGTH = 28;
    static constexpr uint8_t CRC_EXTRA = 39;
    static constexpr auto NAME = "SONAR_DISTANCE";


    float sonar_front; /*< sonar distance value 1 */
    float sonar_behind; /*< sonar distance value 2 */
    float sonar_left; /*< sonar distance value 3 */
    float sonar_right; /*< sonar distance value 4 */
    float sonar_up; /*< sonar distance value 5 */
    float sonar_down; /*< sonar distance value 6 */
    float sonar_cam; /*< sonar distance value 7 */


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
        ss << "  sonar_front: " << sonar_front << std::endl;
        ss << "  sonar_behind: " << sonar_behind << std::endl;
        ss << "  sonar_left: " << sonar_left << std::endl;
        ss << "  sonar_right: " << sonar_right << std::endl;
        ss << "  sonar_up: " << sonar_up << std::endl;
        ss << "  sonar_down: " << sonar_down << std::endl;
        ss << "  sonar_cam: " << sonar_cam << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << sonar_front;                   // offset: 0
        map << sonar_behind;                  // offset: 4
        map << sonar_left;                    // offset: 8
        map << sonar_right;                   // offset: 12
        map << sonar_up;                      // offset: 16
        map << sonar_down;                    // offset: 20
        map << sonar_cam;                     // offset: 24
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> sonar_front;                   // offset: 0
        map >> sonar_behind;                  // offset: 4
        map >> sonar_left;                    // offset: 8
        map >> sonar_right;                   // offset: 12
        map >> sonar_up;                      // offset: 16
        map >> sonar_down;                    // offset: 20
        map >> sonar_cam;                     // offset: 24
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
