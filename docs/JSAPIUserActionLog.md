# JSAPIUserActionLog

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**actionDescription** | **NSString*** | A description of the action taken | 
**actionName** | **NSString*** | The name of the action taken | 
**createdDate** | **NSNumber*** | The date of the action, unix timestamp in seconds | [optional] 
**details** | **NSDictionary&lt;NSString*, NSString*&gt;*** | A map of additional details such as the target of the action | [optional] 
**_id** | **NSString*** | The id of the log entry | [optional] 
**requestId** | **NSString*** | The id of the api request that spawned the action, if generated internally | [optional] 
**userId** | **NSNumber*** | The id of the user that took the action, if any. Read-only if not posting with LOGS_ADMIN | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


