# JSAPIMessageResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**content** | [**JSAPIMessageContentResource***](JSAPIMessageContentResource.md) | The content of the message in various formats | 
**recipient** | **NSString*** | The id of the recipient, dependent on the recipient_type. The user&#39;s id or the topic&#39;s id. Required if sending directly to messaging service | [optional] 
**recipientType** | **NSString*** | The type of recipient for the message. Either a user, or all users in a topic. Required if sending directly to messaging service | [optional] 
**subject** | **NSString*** | The subject of the message. Required for email messages | [optional] 
**type** | **NSString*** | The type of message for websocket type hinting. will be added to the payload with the key _type | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


