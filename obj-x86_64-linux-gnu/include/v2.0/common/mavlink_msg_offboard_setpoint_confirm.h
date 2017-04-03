// MESSAGE OFFBOARD_SETPOINT_CONFIRM PACKING

#define MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM 225

MAVPACKED(
typedef struct __mavlink_offboard_setpoint_confirm_t {
 float px_1; /*<  x1 */
 float py_1; /*<  y1 */
 float ph_1; /*<  H1 */
 float px_2; /*<  x2 */
 float py_2; /*<  y2 */
 float ph_2; /*<  H2 */
 uint8_t seq; /*<  sequence*/
 uint8_t total; /*<  total number*/
}) mavlink_offboard_setpoint_confirm_t;

#define MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN 26
#define MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_MIN_LEN 26
#define MAVLINK_MSG_ID_225_LEN 26
#define MAVLINK_MSG_ID_225_MIN_LEN 26

#define MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_CRC 201
#define MAVLINK_MSG_ID_225_CRC 201



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OFFBOARD_SETPOINT_CONFIRM { \
	225, \
	"OFFBOARD_SETPOINT_CONFIRM", \
	8, \
	{  { "px_1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_offboard_setpoint_confirm_t, px_1) }, \
         { "py_1", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_offboard_setpoint_confirm_t, py_1) }, \
         { "ph_1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_offboard_setpoint_confirm_t, ph_1) }, \
         { "px_2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_offboard_setpoint_confirm_t, px_2) }, \
         { "py_2", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_offboard_setpoint_confirm_t, py_2) }, \
         { "ph_2", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_offboard_setpoint_confirm_t, ph_2) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_offboard_setpoint_confirm_t, seq) }, \
         { "total", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_offboard_setpoint_confirm_t, total) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OFFBOARD_SETPOINT_CONFIRM { \
	"OFFBOARD_SETPOINT_CONFIRM", \
	8, \
	{  { "px_1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_offboard_setpoint_confirm_t, px_1) }, \
         { "py_1", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_offboard_setpoint_confirm_t, py_1) }, \
         { "ph_1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_offboard_setpoint_confirm_t, ph_1) }, \
         { "px_2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_offboard_setpoint_confirm_t, px_2) }, \
         { "py_2", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_offboard_setpoint_confirm_t, py_2) }, \
         { "ph_2", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_offboard_setpoint_confirm_t, ph_2) }, \
         { "seq", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_offboard_setpoint_confirm_t, seq) }, \
         { "total", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_offboard_setpoint_confirm_t, total) }, \
         } \
}
#endif

/**
 * @brief Pack a offboard_setpoint_confirm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param seq  sequence
 * @param total  total number
 * @param px_1  x1 
 * @param py_1  y1 
 * @param ph_1  H1 
 * @param px_2  x2 
 * @param py_2  y2 
 * @param ph_2  H2 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_offboard_setpoint_confirm_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t seq, uint8_t total, float px_1, float py_1, float ph_1, float px_2, float py_2, float ph_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN];
	_mav_put_float(buf, 0, px_1);
	_mav_put_float(buf, 4, py_1);
	_mav_put_float(buf, 8, ph_1);
	_mav_put_float(buf, 12, px_2);
	_mav_put_float(buf, 16, py_2);
	_mav_put_float(buf, 20, ph_2);
	_mav_put_uint8_t(buf, 24, seq);
	_mav_put_uint8_t(buf, 25, total);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN);
#else
	mavlink_offboard_setpoint_confirm_t packet;
	packet.px_1 = px_1;
	packet.py_1 = py_1;
	packet.ph_1 = ph_1;
	packet.px_2 = px_2;
	packet.py_2 = py_2;
	packet.ph_2 = ph_2;
	packet.seq = seq;
	packet.total = total;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_CRC);
}

/**
 * @brief Pack a offboard_setpoint_confirm message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param seq  sequence
 * @param total  total number
 * @param px_1  x1 
 * @param py_1  y1 
 * @param ph_1  H1 
 * @param px_2  x2 
 * @param py_2  y2 
 * @param ph_2  H2 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_offboard_setpoint_confirm_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t seq,uint8_t total,float px_1,float py_1,float ph_1,float px_2,float py_2,float ph_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN];
	_mav_put_float(buf, 0, px_1);
	_mav_put_float(buf, 4, py_1);
	_mav_put_float(buf, 8, ph_1);
	_mav_put_float(buf, 12, px_2);
	_mav_put_float(buf, 16, py_2);
	_mav_put_float(buf, 20, ph_2);
	_mav_put_uint8_t(buf, 24, seq);
	_mav_put_uint8_t(buf, 25, total);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN);
#else
	mavlink_offboard_setpoint_confirm_t packet;
	packet.px_1 = px_1;
	packet.py_1 = py_1;
	packet.ph_1 = ph_1;
	packet.px_2 = px_2;
	packet.py_2 = py_2;
	packet.ph_2 = ph_2;
	packet.seq = seq;
	packet.total = total;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_CRC);
}

/**
 * @brief Encode a offboard_setpoint_confirm struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param offboard_setpoint_confirm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_offboard_setpoint_confirm_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_offboard_setpoint_confirm_t* offboard_setpoint_confirm)
{
	return mavlink_msg_offboard_setpoint_confirm_pack(system_id, component_id, msg, offboard_setpoint_confirm->seq, offboard_setpoint_confirm->total, offboard_setpoint_confirm->px_1, offboard_setpoint_confirm->py_1, offboard_setpoint_confirm->ph_1, offboard_setpoint_confirm->px_2, offboard_setpoint_confirm->py_2, offboard_setpoint_confirm->ph_2);
}

/**
 * @brief Encode a offboard_setpoint_confirm struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param offboard_setpoint_confirm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_offboard_setpoint_confirm_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_offboard_setpoint_confirm_t* offboard_setpoint_confirm)
{
	return mavlink_msg_offboard_setpoint_confirm_pack_chan(system_id, component_id, chan, msg, offboard_setpoint_confirm->seq, offboard_setpoint_confirm->total, offboard_setpoint_confirm->px_1, offboard_setpoint_confirm->py_1, offboard_setpoint_confirm->ph_1, offboard_setpoint_confirm->px_2, offboard_setpoint_confirm->py_2, offboard_setpoint_confirm->ph_2);
}

/**
 * @brief Send a offboard_setpoint_confirm message
 * @param chan MAVLink channel to send the message
 *
 * @param seq  sequence
 * @param total  total number
 * @param px_1  x1 
 * @param py_1  y1 
 * @param ph_1  H1 
 * @param px_2  x2 
 * @param py_2  y2 
 * @param ph_2  H2 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_offboard_setpoint_confirm_send(mavlink_channel_t chan, uint8_t seq, uint8_t total, float px_1, float py_1, float ph_1, float px_2, float py_2, float ph_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN];
	_mav_put_float(buf, 0, px_1);
	_mav_put_float(buf, 4, py_1);
	_mav_put_float(buf, 8, ph_1);
	_mav_put_float(buf, 12, px_2);
	_mav_put_float(buf, 16, py_2);
	_mav_put_float(buf, 20, ph_2);
	_mav_put_uint8_t(buf, 24, seq);
	_mav_put_uint8_t(buf, 25, total);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM, buf, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_CRC);
#else
	mavlink_offboard_setpoint_confirm_t packet;
	packet.px_1 = px_1;
	packet.py_1 = py_1;
	packet.ph_1 = ph_1;
	packet.px_2 = px_2;
	packet.py_2 = py_2;
	packet.ph_2 = ph_2;
	packet.seq = seq;
	packet.total = total;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM, (const char *)&packet, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_CRC);
#endif
}

/**
 * @brief Send a offboard_setpoint_confirm message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_offboard_setpoint_confirm_send_struct(mavlink_channel_t chan, const mavlink_offboard_setpoint_confirm_t* offboard_setpoint_confirm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_offboard_setpoint_confirm_send(chan, offboard_setpoint_confirm->seq, offboard_setpoint_confirm->total, offboard_setpoint_confirm->px_1, offboard_setpoint_confirm->py_1, offboard_setpoint_confirm->ph_1, offboard_setpoint_confirm->px_2, offboard_setpoint_confirm->py_2, offboard_setpoint_confirm->ph_2);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM, (const char *)offboard_setpoint_confirm, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_CRC);
#endif
}

#if MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_offboard_setpoint_confirm_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t seq, uint8_t total, float px_1, float py_1, float ph_1, float px_2, float py_2, float ph_2)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, px_1);
	_mav_put_float(buf, 4, py_1);
	_mav_put_float(buf, 8, ph_1);
	_mav_put_float(buf, 12, px_2);
	_mav_put_float(buf, 16, py_2);
	_mav_put_float(buf, 20, ph_2);
	_mav_put_uint8_t(buf, 24, seq);
	_mav_put_uint8_t(buf, 25, total);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM, buf, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_CRC);
#else
	mavlink_offboard_setpoint_confirm_t *packet = (mavlink_offboard_setpoint_confirm_t *)msgbuf;
	packet->px_1 = px_1;
	packet->py_1 = py_1;
	packet->ph_1 = ph_1;
	packet->px_2 = px_2;
	packet->py_2 = py_2;
	packet->ph_2 = ph_2;
	packet->seq = seq;
	packet->total = total;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM, (const char *)packet, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_MIN_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_CRC);
#endif
}
#endif

#endif

// MESSAGE OFFBOARD_SETPOINT_CONFIRM UNPACKING


/**
 * @brief Get field seq from offboard_setpoint_confirm message
 *
 * @return  sequence
 */
static inline uint8_t mavlink_msg_offboard_setpoint_confirm_get_seq(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field total from offboard_setpoint_confirm message
 *
 * @return  total number
 */
static inline uint8_t mavlink_msg_offboard_setpoint_confirm_get_total(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field px_1 from offboard_setpoint_confirm message
 *
 * @return  x1 
 */
static inline float mavlink_msg_offboard_setpoint_confirm_get_px_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field py_1 from offboard_setpoint_confirm message
 *
 * @return  y1 
 */
static inline float mavlink_msg_offboard_setpoint_confirm_get_py_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field ph_1 from offboard_setpoint_confirm message
 *
 * @return  H1 
 */
static inline float mavlink_msg_offboard_setpoint_confirm_get_ph_1(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field px_2 from offboard_setpoint_confirm message
 *
 * @return  x2 
 */
static inline float mavlink_msg_offboard_setpoint_confirm_get_px_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field py_2 from offboard_setpoint_confirm message
 *
 * @return  y2 
 */
static inline float mavlink_msg_offboard_setpoint_confirm_get_py_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field ph_2 from offboard_setpoint_confirm message
 *
 * @return  H2 
 */
static inline float mavlink_msg_offboard_setpoint_confirm_get_ph_2(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a offboard_setpoint_confirm message into a struct
 *
 * @param msg The message to decode
 * @param offboard_setpoint_confirm C-struct to decode the message contents into
 */
static inline void mavlink_msg_offboard_setpoint_confirm_decode(const mavlink_message_t* msg, mavlink_offboard_setpoint_confirm_t* offboard_setpoint_confirm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	offboard_setpoint_confirm->px_1 = mavlink_msg_offboard_setpoint_confirm_get_px_1(msg);
	offboard_setpoint_confirm->py_1 = mavlink_msg_offboard_setpoint_confirm_get_py_1(msg);
	offboard_setpoint_confirm->ph_1 = mavlink_msg_offboard_setpoint_confirm_get_ph_1(msg);
	offboard_setpoint_confirm->px_2 = mavlink_msg_offboard_setpoint_confirm_get_px_2(msg);
	offboard_setpoint_confirm->py_2 = mavlink_msg_offboard_setpoint_confirm_get_py_2(msg);
	offboard_setpoint_confirm->ph_2 = mavlink_msg_offboard_setpoint_confirm_get_ph_2(msg);
	offboard_setpoint_confirm->seq = mavlink_msg_offboard_setpoint_confirm_get_seq(msg);
	offboard_setpoint_confirm->total = mavlink_msg_offboard_setpoint_confirm_get_total(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN? msg->len : MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN;
        memset(offboard_setpoint_confirm, 0, MAVLINK_MSG_ID_OFFBOARD_SETPOINT_CONFIRM_LEN);
	memcpy(offboard_setpoint_confirm, _MAV_PAYLOAD(msg), len);
#endif
}
