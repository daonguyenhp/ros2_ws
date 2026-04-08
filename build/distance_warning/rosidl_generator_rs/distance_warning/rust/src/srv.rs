#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to distance_warning__srv__SetThreshold_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetThreshold_Request {
    /// true = tăng, false = giảm
    pub increase: bool,

}



impl Default for SetThreshold_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetThreshold_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetThreshold_Request {
  type RmwMsg = super::srv::rmw::SetThreshold_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        increase: msg.increase,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      increase: msg.increase,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      increase: msg.increase,
    }
  }
}


// Corresponds to distance_warning__srv__SetThreshold_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub message: std::string::String,

}



impl Default for SetThreshold_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetThreshold_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetThreshold_Response {
  type RmwMsg = super::srv::rmw::SetThreshold_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        new_threshold: msg.new_threshold,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      new_threshold: msg.new_threshold,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      new_threshold: msg.new_threshold,
      message: msg.message.to_string(),
    }
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


