# JSAPIArtistResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**additionalProperties** | [**NSDictionary***](JSAPIProperty.md) | A map of additional properties, keyed on the property name.  Must match the names and types defined in the template for this item type | [optional] 
**born** | **NSString*** | YYYY/MM/DD when this artist was born | [optional] 
**contributionCount** | **NSNumber*** | The current number of contributions the artist has made | [optional] 
**contributions** | [**NSArray&lt;JSAPIContributionResource&gt;***](JSAPIContributionResource.md) | The list of media this artist has contributed to as well as role(s) during contribution.  Use media endpoint to add contributions | [optional] 
**createdDate** | **NSNumber*** | The date/time this resource was created in seconds since unix epoch | [optional] 
**died** | **NSString*** | YYYY/MM/DD when this artist died | [optional] 
**_id** | **NSNumber*** | The unique ID for that resource | [optional] 
**longDescription** | **NSString*** | The user friendly name of that resource. Defaults to blank string | [optional] 
**name** | **NSString*** | The user friendly name of that resource | 
**priority** | **NSNumber*** | The sort order priority ofr the artist.  Default 100 | [optional] 
**shortDescription** | **NSString*** | The user friendly name of that resource. Defaults to blank string | [optional] 
**template** | **NSString*** | An artist template this artist is validated against (private). May be null and no validation of additional_properties will be done | [optional] 
**updatedDate** | **NSNumber*** | The date/time this resource was last updated in seconds since unix epoch | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


