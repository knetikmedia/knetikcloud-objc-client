# JSAPINotificationTypeResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**createdDate** | **NSNumber*** | The date the type was created, as a unix timestamp in seconds | [optional] 
**emailBodyTemplateExternal** | **NSNumber*** | Whether the email body should be resolved. If true, the external email delivery system will be expected to handle the templating (Mandrill/Mailchimp). default: false | [optional] 
**emailBodyTemplateId** | **NSString*** | The id of a message template to resolve the email body. If null, no websocket message wil be sent | [optional] 
**emailSubjectTemplateId** | **NSString*** | The id of a message template to resolve the email subject. If null, no websocket message wil be sent | [optional] 
**_id** | **NSString*** | The id of the notification type. Default: random | [optional] 
**name** | **NSString*** | The name of the notification type | 
**smsTemplateId** | **NSString*** | The id of a message template to resolve the SMS message. If null, no sms message wil be sent | [optional] 
**updatedDate** | **NSNumber*** | The date the type was last updated, as a unix timestamp in seconds | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


