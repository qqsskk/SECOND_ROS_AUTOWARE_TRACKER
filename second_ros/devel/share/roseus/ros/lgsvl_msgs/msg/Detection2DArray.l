;; Auto-generated. Do not edit!


(when (boundp 'lgsvl_msgs::Detection2DArray)
  (if (not (find-package "LGSVL_MSGS"))
    (make-package "LGSVL_MSGS"))
  (shadow 'Detection2DArray (find-package "LGSVL_MSGS")))
(unless (find-package "LGSVL_MSGS::DETECTION2DARRAY")
  (make-package "LGSVL_MSGS::DETECTION2DARRAY"))

(in-package "ROS")
;;//! \htmlinclude Detection2DArray.msg.html
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass lgsvl_msgs::Detection2DArray
  :super ros::object
  :slots (_header _detections ))

(defmethod lgsvl_msgs::Detection2DArray
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:detections __detections) (let (r) (dotimes (i 0) (push (instance lgsvl_msgs::Detection2D :init) r)) r))
    )
   (send-super :init)
   (setq _header __header)
   (setq _detections __detections)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:detections
   (&rest __detections)
   (if (keywordp (car __detections))
       (send* _detections __detections)
     (progn
       (if __detections (setq _detections (car __detections)))
       _detections)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; lgsvl_msgs/Detection2D[] _detections
    (apply #'+ (send-all _detections :serialization-length)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; lgsvl_msgs/Detection2D[] _detections
     (write-long (length _detections) s)
     (dolist (elem _detections)
       (send elem :serialize s)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; lgsvl_msgs/Detection2D[] _detections
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _detections (let (r) (dotimes (i n) (push (instance lgsvl_msgs::Detection2D :init) r)) r))
     (dolist (elem- _detections)
     (send elem- :deserialize buf ptr-) (incf ptr- (send elem- :serialization-length))
     ))
   ;;
   self)
  )

(setf (get lgsvl_msgs::Detection2DArray :md5sum-) "6104af071edb62623402eb699c3c5b70")
(setf (get lgsvl_msgs::Detection2DArray :datatype-) "lgsvl_msgs/Detection2DArray")
(setf (get lgsvl_msgs::Detection2DArray :definition-)
      "std_msgs/Header header
Detection2D[] detections  # A list of 2D detections

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: lgsvl_msgs/Detection2D
std_msgs/Header header
uint32 id  # The numeric ID of the detected object
string label  # car, pedestrian
float32 score  # The confidence score of the detected object in the range [0-1]
BoundingBox2D bbox  # A 2D bounding box
geometry_msgs/Twist velocity  # Linear and angular velocity

================================================================================
MSG: lgsvl_msgs/BoundingBox2D
float32 x  # x position of the bounding box center in camera image space, in pixels
float32 y  # y position of the bounding box center in camera image space, in pixels
float32 width  # width of the bounding box, in pixels
float32 height  # height of the bounding box, in pixels

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
")



(provide :lgsvl_msgs/Detection2DArray "6104af071edb62623402eb699c3c5b70")


