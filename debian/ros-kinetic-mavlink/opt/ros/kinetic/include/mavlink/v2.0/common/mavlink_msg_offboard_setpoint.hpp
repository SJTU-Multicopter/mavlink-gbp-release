// MESSAGE OFFBOARD_SETPOINT support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief OFFBOARD_SETPOINT message
 *
 * Message for field 
 */
struct OFFBOARD_SETPOINT : mavlink::Message {
    static constexpr msgid_t MSG_ID = 224;
    static constexpr size_t LENGTH = 30;
    static constexpr size_t MIN_LENGTH = 30;
    static constexpr uint8_t CRC_EXTRA = 101;
    static constexpr auto NAME = "OFFBOARD_SETPOINT";


    uint8_t seq; /*<  sequence */
    uint8_t total; /*<  total number */
    float px_1; /*<  x1  */
    float py_1; /*<  y1  */
    float ph_1; /*<  H1  */
    float px_2; /*<  x2  */
    float py_2; /*<  y2  */
    float ph_2; /*<  H2  */
    float yaw; /*<  yaw  */


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
        ss << "  seq: " << +seq << std::endl;
        ss << "  total: " << +total << std::endl;
        ss << "  px_1: " << px_1 << std::endl;
        ss << "  py_1: " << py_1 << std::endl;
        ss << "  ph_1: " << ph_1 << std::endl;
        ss << "  px_2: " << px_2 << std::endl;
        ss << "  py_2: " << py_2 << std::endl;
        ss << "  ph_2: " << ph_2 << std::endl;
        ss << "  yaw: " << yaw << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << px_1;                          // offset: 0
        map << py_1;                          // offset: 4
        map << ph_1;                          // offset: 8
        map << px_2;                          // offset: 12
        map << py_2;                          // offset: 16
        map << ph_2;                          // offset: 20
        map << yaw;                           // offset: 24
        map << seq;                           // offset: 28
        map << total;                         // offset: 29
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> px_1;                          // offset: 0
        map >> py_1;                          // offset: 4
        map >> ph_1;                          // offset: 8
        map >> px_2;                          // offset: 12
        map >> py_2;                          // offset: 16
        map >> ph_2;                          // offset: 20
        map >> yaw;                           // offset: 24
        map >> seq;                           // offset: 28
        map >> total;                         // offset: 29
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
