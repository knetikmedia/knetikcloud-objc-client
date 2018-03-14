# JSAPIGroupMemberResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this type, or be an extra not from the template | [optional] 
**group** | [**JSAPISimpleGroupResource***](JSAPISimpleGroupResource.md) | The group. Id is the unique name | [optional] 
**implicit** | **NSNumber*** | Whether this membership is explicit (the user was added directly to the group) or implicit (the user was added only to one or more child groups) | [optional] 
**membershipId** | **NSNumber*** | The id of the membership entry | [optional] 
**order** | **NSString*** | The position of the member in the group if applicable. Read notes for details | [optional] 
**status** | **NSString*** | The member&#39;s access level. Default: member | [optional] 
**template** | **NSString*** | A template this member additional properties are validated against (private). May be null and no validation of properties will be done | [optional] 
**user** | [**JSAPISimpleUserResource***](JSAPISimpleUserResource.md) | The user | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


