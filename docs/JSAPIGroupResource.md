# JSAPIGroupResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type | [optional] 
**_description** | **NSString*** | A description of the group | [optional] 
**memberCount** | **NSNumber*** | The number of users in the group | [optional] 
**messageOfTheDay** | **NSString*** | A message of the day for members of the group | [optional] 
**name** | **NSString*** | The name of the group. Max 50 characters | 
**parent** | **NSString*** | The unique name of another group that this group is a subset of | [optional] 
**status** | **NSString*** | The status which describes whether other users can freely join the group or not | 
**subMemberCount** | **NSNumber*** | The number of users in child groups | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | Tags for search | [optional] 
**template** | **NSString*** | A group template this group is validated against. May be null and no validation of additional_properties will be done | [optional] 
**uniqueName** | **NSString*** | Unique name used in url and references. Uppercase, lowercase, numbers and hyphens only. Max 50 characters. Cannot be altered once created. Default: random UUID | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


