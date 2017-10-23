# JSAPIGroupMemberResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary&lt;JSAPIProperty&gt;***](JSAPIProperty.md) | A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this type, or be an extra not from the template | [optional] 
**avatarUrl** | **NSString*** | The url of the user&#39;s avatar image | [optional] 
**displayName** | **NSString*** | The public username of the user | [optional] 
**_id** | **NSNumber*** | The id of the user | 
**order** | **NSString*** | The position of the member in the group if applicable. Read notes for details | [optional] 
**status** | **NSString*** | The member&#39;s access level. Default: member | [optional] 
**template** | **NSString*** | A template this member additional properties are validated against (private). May be null and no validation of properties will be done | [optional] 
**username** | **NSString*** | The username of the user | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


