#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "distance_warning__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__distance_warning__srv__SetThreshold_Request() -> *const std::ffi::c_void;
}

#[link(name = "distance_warning__rosidl_generator_c")]
extern "C" {
    fn distance_warning__srv__SetThreshold_Request__init(msg: *mut SetThreshold_Request) -> bool;
    fn distance_warning__srv__SetThreshold_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetThreshold_Request>, size: usize) -> bool;
    fn distance_warning__srv__SetThreshold_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetThreshold_Request>);
    fn distance_warning__srv__SetThreshold_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetThreshold_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetThreshold_Request>) -> bool;
}

// Corresponds to distance_warning__srv__SetThreshold_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetThreshold_Request {
    /// true = tăng, false = giảm
    pub increase: bool,

}



impl Default for SetThreshold_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !distance_warning__srv__SetThreshold_Request__init(&mut msg as *mut _) {
        panic!("Call to distance_warning__srv__SetThreshold_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetThreshold_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { distance_warning__srv__SetThreshold_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { distance_warning__srv__SetThreshold_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { distance_warning__srv__SetThreshold_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetThreshold_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetThreshold_Request where Self: Sized {
  const TYPE_NAME: &'static str = "distance_warning/srv/SetThreshold_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__distance_warning__srv__SetThreshold_Request() }
  }
}


#[link(name = "distance_warning__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__distance_warning__srv__SetThreshold_Response() -> *const std::ffi::c_void;
}

#[link(name = "distance_warning__rosidl_generator_c")]
extern "C" {
    fn distance_warning__srv__SetThreshold_Response__init(msg: *mut SetThreshold_Response) -> bool;
    fn distance_warning__srv__SetThreshold_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetThreshold_Response>, size: usize) -> bool;
    fn distance_warning__srv__SetThreshold_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetThreshold_Response>);
    fn distance_warning__srv__SetThreshold_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetThreshold_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetThreshold_Response>) -> bool;
}

// Corresponds to distance_warning__srv__SetThreshold_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetThreshold_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub new_threshold: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetThreshold_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !distance_warning__srv__SetThreshold_Response__init(&mut msg as *mut _) {
        panic!("Call to distance_warning__srv__SetThreshold_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetThreshold_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { distance_warning__srv__SetThreshold_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { distance_warning__srv__SetThreshold_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { distance_warning__srv__SetThreshold_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetThreshold_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetThreshold_Response where Self: Sized {
  const TYPE_NAME: &'static str = "distance_warning/srv/SetThreshold_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__distance_warning__srv__SetThreshold_Response() }
  }
}






#[link(name = "distance_warning__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__distance_warning__srv__SetThreshold() -> *const std::ffi::c_void;
}

// Corresponds to distance_warning__srv__SetThreshold
#[allow(missing_docs, non_camel_case_types)]
pub struct SetThreshold;

impl rosidl_runtime_rs::Service for SetThreshold {
    type Request = SetThreshold_Request;
    type Response = SetThreshold_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__distance_warning__srv__SetThreshold() }
    }
}


