# JSAPIPollResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**active** | **NSNumber*** | Whether the poll is active | 
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type | [optional] 
**answers** | [**NSArray&lt;JSAPIPollAnswerResource&gt;***](JSAPIPollAnswerResource.md) | The answers to the poll | 
**category** | [**JSAPINestedCategory***](JSAPINestedCategory.md) | The category for the poll | 
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since unix epoch | [optional] 
**_id** | **NSString*** | The id of the poll | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | The tags for the poll | [optional] 
**template** | **NSString*** | A poll template this poll is validated against (private). May be null and no validation of additional_properties will be done | [optional] 
**text** | **NSString*** | The text of the poll | 
**type** | **NSString*** | The media type of the poll | 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since unix epoch | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


