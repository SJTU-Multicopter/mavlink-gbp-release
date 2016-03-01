// MESSAGE VICON PACKING

#define MAVLINK_MSG_ID_VICON 236

typedef struct __mavlink_vicon_t
{
 float x; ///< position x
 float y; ///< position y
 float z; ///< position z
 float vx; ///< velocity x
 float vy; ///< velocity y
 float vz; ///< velocity z
} mavlink_vicon_t;

#define MAVLINK_MSG_ID_VICON_LEN 24
#define MAVLINK_MSG_ID_236_LEN 24

#define MAVLINK_MSG_ID_VICON_CRC 2
#define MAVLINK_MSG_ID_236_CRC 2



#define MAVLINK_MESSAGE_INFO_VICON { \
	"VICON", \
	6, \
	{  { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_vicon_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_vicon_t, y) }, \
         { "z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_vicon_t, z) }, \
         { "vx", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_vicon_t, vx) }, \
         { "vy", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_vicon_t, vy) }, \
         { "vz", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_vicon_t, vz) }, \
         } \
}


/**
 * @brief Pack a vicon message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param x position x
 * @param y position y
 * @param z position z
 * @param vx velocity x
 * @param vy velocity y
 * @param vz velocity z
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vicon_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       float x, float y, float z, float vx, float vy, float vz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VICON_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, vx);
	_mav_put_float(buf, 16, vy);
	_mav_put_float(buf, 20, vz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VICON_LEN);
#else
	mavlink_vicon_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VICON_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_VICON;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VICON_LEN, MAVLINK_MSG_ID_VICON_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VICON_LEN);
#endif
}

/**
 * @brief Pack a vicon message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param x position x
 * @param y position y
 * @param z position z
 * @param vx velocity x
 * @param vy velocity y
 * @param vz velocity z
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vicon_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           float x,float y,float z,float vx,float vy,float vz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VICON_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, vx);
	_mav_put_float(buf, 16, vy);
	_mav_put_float(buf, 20, vz);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VICON_LEN);
#else
	mavlink_vicon_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VICON_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_VICON;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VICON_LEN, MAVLINK_MSG_ID_VICON_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VICON_LEN);
#endif
}

/**
 * @brief Encode a vicon struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vicon C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vicon_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vicon_t* vicon)
{
	return mavlink_msg_vicon_pack(system_id, component_id, msg, vicon->x, vicon->y, vicon->z, vicon->vx, vicon->vy, vicon->vz);
}

/**
 * @brief Encode a vicon struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vicon C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vicon_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vicon_t* vicon)
{
	return mavlink_msg_vicon_pack_chan(system_id, component_id, chan, msg, vicon->x, vicon->y, vicon->z, vicon->vx, vicon->vy, vicon->vz);
}

/**
 * @brief Send a vicon message
 * @param chan MAVLink channel to send the message
 *
 * @param x position x
 * @param y position y
 * @param z position z
 * @param vx velocity x
 * @param vy velocity y
 * @param vz velocity z
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vicon_send(mavlink_channel_t chan, float x, float y, float z, float vx, float vy, float vz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_VICON_LEN];
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, vx);
	_mav_put_float(buf, 16, vy);
	_mav_put_float(buf, 20, vz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VICON, buf, MAVLINK_MSG_ID_VICON_LEN, MAVLINK_MSG_ID_VICON_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VICON, buf, MAVLINK_MSG_ID_VICON_LEN);
#endif
#else
	mavlink_vicon_t packet;
	packet.x = x;
	packet.y = y;
	packet.z = z;
	packet.vx = vx;
	packet.vy = vy;
	packet.vz = vz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VICON, (const char *)&packet, MAVLINK_MSG_ID_VICON_LEN, MAVLINK_MSG_ID_VICON_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VICON, (const char *)&packet, MAVLINK_MSG_ID_VICON_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_VICON_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vicon_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  float x, float y, float z, float vx, float vy, float vz)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;
	_mav_put_float(buf, 0, x);
	_mav_put_float(buf, 4, y);
	_mav_put_float(buf, 8, z);
	_mav_put_float(buf, 12, vx);
	_mav_put_float(buf, 16, vy);
	_mav_put_float(buf, 20, vz);

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VICON, buf, MAVLINK_MSG_ID_VICON_LEN, MAVLINK_MSG_ID_VICON_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VICON, buf, MAVLINK_MSG_ID_VICON_LEN);
#endif
#else
	mavlink_vicon_t *packet = (mavlink_vicon_t *)msgbuf;
	packet->x = x;
	packet->y = y;
	packet->z = z;
	packet->vx = vx;
	packet->vy = vy;
	packet->vz = vz;

#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VICON, (const char *)packet, MAVLINK_MSG_ID_VICON_LEN, MAVLINK_MSG_ID_VICON_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VICON, (const char *)packet, MAVLINK_MSG_ID_VICON_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE VICON UNPACKING


/**
 * @brief Get field x from vicon message
 *
 * @return position x
 */
static inline float mavlink_msg_vicon_get_x(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field y from vicon message
 *
 * @return position y
 */
static inline float mavlink_msg_vicon_get_y(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field z from vicon message
 *
 * @return position z
 */
static inline float mavlink_msg_vicon_get_z(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field vx from vicon message
 *
 * @return velocity x
 */
static inline float mavlink_msg_vicon_get_vx(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field vy from vicon message
 *
 * @return velocity y
 */
static inline float mavlink_msg_vicon_get_vy(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field vz from vicon message
 *
 * @return velocity z
 */
static inline float mavlink_msg_vicon_get_vz(const mavlink_message_t* msg)
{
	return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Decode a vicon message into a struct
 *
 * @param msg The message to decode
 * @param vicon C-struct to decode the message contents into
 */
static inline void mavlink_msg_vicon_decode(const mavlink_message_t* msg, mavlink_vicon_t* vicon)
{
#if MAVLINK_NEED_BYTE_SWAP
	vicon->x = mavlink_msg_vicon_get_x(msg);
	vicon->y = mavlink_msg_vicon_get_y(msg);
	vicon->z = mavlink_msg_vicon_get_z(msg);
	vicon->vx = mavlink_msg_vicon_get_vx(msg);
	vicon->vy = mavlink_msg_vicon_get_vy(msg);
	vicon->vz = mavlink_msg_vicon_get_vz(msg);
#else
	memcpy(vicon, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_VICON_LEN);
#endif
}
