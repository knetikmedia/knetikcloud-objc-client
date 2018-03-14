# JSAPIAchievementDefinitionResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this resource type | [optional] 
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since unix epoch | [optional] 
**_description** | **NSString*** | The description of the achievement | [optional] 
**hidden** | **NSNumber*** | Whether the achievement is hidden from the user | 
**name** | **NSString*** | The name of the achievement. Must be at least 6 characters in length. IMMUTABLE | 
**requiredProgress** | **NSNumber*** | The required progress for the achievement definition | 
**ruleId** | **NSString*** | The id of the rule generated for this achievement | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | The tags for the achievement definition | [optional] 
**template** | **NSString*** | An achievement template this achievement is validated against (private). May be null and no validation of additional_properties will be done | [optional] 
**triggerEventName** | **NSString*** | The name of the trigger event associated with this achievement | [optional] 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since unix epoch | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


