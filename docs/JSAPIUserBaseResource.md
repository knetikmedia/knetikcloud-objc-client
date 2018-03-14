# JSAPIUserBaseResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**avatarUrl** | **NSString*** | The url of the user&#39;s avatar image | [optional] 
**displayName** | **NSString*** | The chosen display name of the user, defaults to username if not present | [optional] 
**email** | **NSString*** | The user&#39;s email address (private). May be required and/or unique depending on system configuration (both on by default). Must match standard email requirements if provided (RFC 2822) | 
**fullname** | **NSString*** | The user&#39;s full name (private) | [optional] 
**_id** | **NSNumber*** | The id of the user | [optional] 
**lastActivity** | **NSNumber*** | The date the user last interacted with the API (private) | [optional] 
**lastUpdated** | **NSNumber*** | The date the user&#39;s info was last updated as a unix timestamp | [optional] 
**memberSince** | **NSNumber*** | The user&#39;s date of registration as a unix timestamp | [optional] 
**username** | **NSString*** | The login username for the user (private). May be set to match email if system does not require usernames separately. | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


