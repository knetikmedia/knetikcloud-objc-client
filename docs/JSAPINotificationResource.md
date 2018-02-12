# JSAPINotificationResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**data** | **NSObject*** | The data to send to websockets. Also used to fill in the templates | [optional] 
**notificationId** | **NSString*** | The id of this individual notification. Default: random | [optional] 
**notificationTypeId** | **NSString*** | The id of the notification type which will define message templates | 
**recipient** | **NSString*** | The id of the recipient, dependent on the recipient_type. The user&#39;s id or the topic&#39;s id | 
**recipientType** | **NSString*** | The type of recipient for the notification. Either a user, or all users in a topic | 
**sendDate** | **NSNumber*** | The date this notification was sent | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


