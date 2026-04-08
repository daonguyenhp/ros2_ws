
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to distance_warning__action__CheckDistance_Goal

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckDistance_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub distance_to_check: f32,

}



impl Default for CheckDistance_Goal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CheckDistance_Goal::default())
  }
}

impl rosidl_runtime_rs::Message for CheckDistance_Goal {
  type RmwMsg = super::action::rmw::CheckDistance_Goal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        distance_to_check: msg.distance_to_check,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      distance_to_check: msg.distance_to_check,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      distance_to_check: msg.distance_to_check,
    }
  }
}


// Corresponds to distance_warning__action__CheckDistance_Result

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckDistance_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_safe: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result_message: std::string::String,

}



impl Default for CheckDistance_Result {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CheckDistance_Result::default())
  }
}

impl rosidl_runtime_rs::Message for CheckDistance_Result {
  type RmwMsg = super::action::rmw::CheckDistance_Result;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_safe: msg.is_safe,
        result_message: msg.result_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_safe: msg.is_safe,
        result_message: msg.result_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_safe: msg.is_safe,
      result_message: msg.result_message.to_string(),
    }
  }
}


// Corresponds to distance_warning__action__CheckDistance_Feedback

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckDistance_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub step: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub total_steps: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback_msg: std::string::String,

}



impl Default for CheckDistance_Feedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CheckDistance_Feedback::default())
  }
}

impl rosidl_runtime_rs::Message for CheckDistance_Feedback {
  type RmwMsg = super::action::rmw::CheckDistance_Feedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        step: msg.step,
        total_steps: msg.total_steps,
        feedback_msg: msg.feedback_msg.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      step: msg.step,
      total_steps: msg.total_steps,
        feedback_msg: msg.feedback_msg.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      step: msg.step,
      total_steps: msg.total_steps,
      feedback_msg: msg.feedback_msg.to_string(),
    }
  }
}


// Corresponds to distance_warning__action__CheckDistance_FeedbackMessage

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckDistance_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::action::CheckDistance_Feedback,

}



impl Default for CheckDistance_FeedbackMessage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CheckDistance_FeedbackMessage::default())
  }
}

impl rosidl_runtime_rs::Message for CheckDistance_FeedbackMessage {
  type RmwMsg = super::action::rmw::CheckDistance_FeedbackMessage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        feedback: super::action::CheckDistance_Feedback::into_rmw_message(std::borrow::Cow::Owned(msg.feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        feedback: super::action::CheckDistance_Feedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      feedback: super::action::CheckDistance_Feedback::from_rmw_message(msg.feedback),
    }
  }
}






// Corresponds to distance_warning__action__CheckDistance_SendGoal_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckDistance_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::action::CheckDistance_Goal,

}



impl Default for CheckDistance_SendGoal_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CheckDistance_SendGoal_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CheckDistance_SendGoal_Request {
  type RmwMsg = super::action::rmw::CheckDistance_SendGoal_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
        goal: super::action::CheckDistance_Goal::into_rmw_message(std::borrow::Cow::Owned(msg.goal)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
        goal: super::action::CheckDistance_Goal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
      goal: super::action::CheckDistance_Goal::from_rmw_message(msg.goal),
    }
  }
}


// Corresponds to distance_warning__action__CheckDistance_SendGoal_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckDistance_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,

}



impl Default for CheckDistance_SendGoal_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CheckDistance_SendGoal_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CheckDistance_SendGoal_Response {
  type RmwMsg = super::action::rmw::CheckDistance_SendGoal_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      accepted: msg.accepted,
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      accepted: msg.accepted,
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
    }
  }
}


// Corresponds to distance_warning__action__CheckDistance_GetResult_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckDistance_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::UUID,

}



impl Default for CheckDistance_GetResult_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CheckDistance_GetResult_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CheckDistance_GetResult_Request {
  type RmwMsg = super::action::rmw::CheckDistance_GetResult_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Owned(msg.goal_id)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        goal_id: unique_identifier_msgs::msg::UUID::into_rmw_message(std::borrow::Cow::Borrowed(&msg.goal_id)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      goal_id: unique_identifier_msgs::msg::UUID::from_rmw_message(msg.goal_id),
    }
  }
}


// Corresponds to distance_warning__action__CheckDistance_GetResult_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CheckDistance_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::action::CheckDistance_Result,

}



impl Default for CheckDistance_GetResult_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::action::rmw::CheckDistance_GetResult_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CheckDistance_GetResult_Response {
  type RmwMsg = super::action::rmw::CheckDistance_GetResult_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: msg.status,
        result: super::action::CheckDistance_Result::into_rmw_message(std::borrow::Cow::Owned(msg.result)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      status: msg.status,
        result: super::action::CheckDistance_Result::into_rmw_message(std::borrow::Cow::Borrowed(&msg.result)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: msg.status,
      result: super::action::CheckDistance_Result::from_rmw_message(msg.result),
    }
  }
}






#[link(name = "distance_warning__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__distance_warning__action__CheckDistance_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to distance_warning__action__CheckDistance_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct CheckDistance_SendGoal;

impl rosidl_runtime_rs::Service for CheckDistance_SendGoal {
    type Request = CheckDistance_SendGoal_Request;
    type Response = CheckDistance_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__distance_warning__action__CheckDistance_SendGoal() }
    }
}




#[link(name = "distance_warning__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__distance_warning__action__CheckDistance_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to distance_warning__action__CheckDistance_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct CheckDistance_GetResult;

impl rosidl_runtime_rs::Service for CheckDistance_GetResult {
    type Request = CheckDistance_GetResult_Request;
    type Response = CheckDistance_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__distance_warning__action__CheckDistance_GetResult() }
    }
}






#[link(name = "distance_warning__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_action_type_support_handle__distance_warning__action__CheckDistance() -> *const std::ffi::c_void;
}

// Corresponds to distance_warning__action__CheckDistance
#[allow(missing_docs, non_camel_case_types)]
pub struct CheckDistance;

impl rosidl_runtime_rs::Action for CheckDistance {
  // --- Associated types for client library users ---
  /// The goal message defined in the action definition.
  type Goal = CheckDistance_Goal;

  /// The result message defined in the action definition.
  type Result = CheckDistance_Result;

  /// The feedback message defined in the action definition.
  type Feedback = CheckDistance_Feedback;

  // --- Associated types for client library implementation ---
  /// The feedback message with generic fields which wraps the feedback message.
  type FeedbackMessage = super::action::CheckDistance_FeedbackMessage;

  /// The send_goal service using a wrapped version of the goal message as a request.
  type SendGoalService = super::action::CheckDistance_SendGoal;

  /// The generic service to cancel a goal.
  type CancelGoalService = action_msgs::srv::rmw::CancelGoal;

  /// The get_result service using a wrapped version of the result message as a response.
  type GetResultService = super::action::CheckDistance_GetResult;

  // --- Methods for client library implementation ---
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_action_type_support_handle__distance_warning__action__CheckDistance() }
  }

  fn create_goal_request(
    goal_id: &[u8; 16],
    goal: super::action::rmw::CheckDistance_Goal,
  ) -> super::action::rmw::CheckDistance_SendGoal_Request {
   super::action::rmw::CheckDistance_SendGoal_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
      goal,
    }
  }

  fn split_goal_request(
    request: super::action::rmw::CheckDistance_SendGoal_Request,
  ) -> (
    [u8; 16],
   super::action::rmw::CheckDistance_Goal,
  ) {
    (request.goal_id.uuid, request.goal)
  }

  fn create_goal_response(
    accepted: bool,
    stamp: (i32, u32),
  ) -> super::action::rmw::CheckDistance_SendGoal_Response {
   super::action::rmw::CheckDistance_SendGoal_Response {
      accepted,
      stamp: builtin_interfaces::msg::rmw::Time {
        sec: stamp.0,
        nanosec: stamp.1,
      },
    }
  }

  fn get_goal_response_accepted(
    response: &super::action::rmw::CheckDistance_SendGoal_Response,
  ) -> bool {
    response.accepted
  }

  fn get_goal_response_stamp(
    response: &super::action::rmw::CheckDistance_SendGoal_Response,
  ) -> (i32, u32) {
    (response.stamp.sec, response.stamp.nanosec)
  }

  fn create_feedback_message(
    goal_id: &[u8; 16],
    feedback: super::action::rmw::CheckDistance_Feedback,
  ) -> super::action::rmw::CheckDistance_FeedbackMessage {
    let mut message = super::action::rmw::CheckDistance_FeedbackMessage::default();
    message.goal_id.uuid = *goal_id;
    message.feedback = feedback;
    message
  }

  fn split_feedback_message(
    feedback: super::action::rmw::CheckDistance_FeedbackMessage,
  ) -> (
    [u8; 16],
   super::action::rmw::CheckDistance_Feedback,
  ) {
    (feedback.goal_id.uuid, feedback.feedback)
  }

  fn create_result_request(
    goal_id: &[u8; 16],
  ) -> super::action::rmw::CheckDistance_GetResult_Request {
   super::action::rmw::CheckDistance_GetResult_Request {
      goal_id: unique_identifier_msgs::msg::rmw::UUID { uuid: *goal_id },
    }
  }

  fn get_result_request_uuid(
    request: &super::action::rmw::CheckDistance_GetResult_Request,
  ) -> &[u8; 16] {
    &request.goal_id.uuid
  }

  fn create_result_response(
    status: i8,
    result: super::action::rmw::CheckDistance_Result,
  ) -> super::action::rmw::CheckDistance_GetResult_Response {
   super::action::rmw::CheckDistance_GetResult_Response {
      status,
      result,
    }
  }

  fn split_result_response(
    response: super::action::rmw::CheckDistance_GetResult_Response
  ) -> (
    i8,
   super::action::rmw::CheckDistance_Result,
  ) {
    (response.status, response.result)
  }
}


