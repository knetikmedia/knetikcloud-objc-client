# JSAPIImportJobResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**categoryId** | **NSString*** | The id of the category to assign all questions in the import to | 
**createdDate** | **NSNumber*** | The date the job was created in seconds since unix epoc | [optional] 
**_id** | **NSNumber*** | The id of the job | [optional] 
**name** | **NSString*** | A name for this import for later reference | 
**output** | [**NSArray&lt;JSAPIImportJobOutputResource&gt;***](JSAPIImportJobOutputResource.md) | Error information from validation | [optional] 
**recordCount** | **NSNumber*** | The number of questions form the CSV file. Filled in after validation | [optional] 
**status** | **NSString*** | The status of the job | [optional] 
**updatedDate** | **NSNumber*** | The date the job was last updated in seconds since unix epoc | [optional] 
**url** | **NSString*** | The url of a CSV file to pull trivia questions from. Cannot be changed after initial POST | 
**vendor** | **NSString*** | The vendor who supplied this set of questions | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


