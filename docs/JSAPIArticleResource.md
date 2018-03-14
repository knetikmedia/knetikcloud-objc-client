# JSAPIArticleResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**active** | **NSNumber*** | Whether the article is active | 
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type | [optional] 
**body** | **NSString*** | The body of the article | 
**category** | [**JSAPINestedCategory***](JSAPINestedCategory.md) | The category for the article | 
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since unix epoch | [optional] 
**_id** | **NSString*** | The id of the article | [optional] 
**tags** | **NSArray&lt;NSString*&gt;*** | The tags for the article | [optional] 
**template** | **NSString*** | An article template this article is validated against (private). May be null and no validation of additional_properties will be done | [optional] 
**title** | **NSString*** | The title of the article | 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since unix epoch | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


