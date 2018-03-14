# JSAPIAmazonWebServicesS3Api

All URIs are relative to *https://jsapi-integration.us-east-1.elasticbeanstalk.com*

Method | HTTP request | Description
------------- | ------------- | -------------
[**getDownloadURL**](JSAPIAmazonWebServicesS3Api.md#getdownloadurl) | **GET** /amazon/s3/downloadurl | Get a temporary signed S3 URL for download
[**getSignedS3URL**](JSAPIAmazonWebServicesS3Api.md#getsigneds3url) | **GET** /amazon/s3/signedposturl | Get a signed S3 URL for upload


# **getDownloadURL**
```objc
-(NSURLSessionTask*) getDownloadURLWithBucket: (NSString*) bucket
    path: (NSString*) path
    expiration: (NSNumber*) expiration
        completionHandler: (void (^)(NSString* output, NSError* error)) handler;
```

Get a temporary signed S3 URL for download

To give access to files in your own S3 account, you will need to grant KnetikcCloud access to the file by adjusting your bucket policy accordingly. See S3 documentation for details. <br><br><b>Permissions Needed:</b> S3_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* bucket = @"bucket_example"; // S3 bucket name (optional)
NSString* path = @"path_example"; // The path to the file relative to the bucket (the s3 object key) (optional)
NSNumber* expiration = @60; // The number of seconds this URL will be valid. Default to 60 (optional) (default to 60)

JSAPIAmazonWebServicesS3Api*apiInstance = [[JSAPIAmazonWebServicesS3Api alloc] init];

// Get a temporary signed S3 URL for download
[apiInstance getDownloadURLWithBucket:bucket
              path:path
              expiration:expiration
          completionHandler: ^(NSString* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAmazonWebServicesS3Api->getDownloadURL: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **bucket** | **NSString***| S3 bucket name | [optional] 
 **path** | **NSString***| The path to the file relative to the bucket (the s3 object key) | [optional] 
 **expiration** | **NSNumber***| The number of seconds this URL will be valid. Default to 60 | [optional] [default to 60]

### Return type

**NSString***

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **getSignedS3URL**
```objc
-(NSURLSessionTask*) getSignedS3URLWithFilename: (NSString*) filename
    contentType: (NSString*) contentType
        completionHandler: (void (^)(JSAPIAmazonS3Activity* output, NSError* error)) handler;
```

Get a signed S3 URL for upload

Requires the file name and file content type (i.e., 'video/mpeg'). Make a PUT to the resulting url to upload the file and use the cdn_url to retrieve it after. <br><br><b>Permissions Needed:</b> S3_USER or S3_ADMIN

### Example 
```objc
JSAPIDefaultConfiguration *apiConfig = [JSAPIDefaultConfiguration sharedConfig];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_client_credentials_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];

// Configure OAuth2 access token for authorization: (authentication scheme: oauth2_password_grant)
[apiConfig setAccessToken:@"YOUR_ACCESS_TOKEN"];


NSString* filename = @"filename_example"; // The file name (optional)
NSString* contentType = @"contentType_example"; // The content type (optional)

JSAPIAmazonWebServicesS3Api*apiInstance = [[JSAPIAmazonWebServicesS3Api alloc] init];

// Get a signed S3 URL for upload
[apiInstance getSignedS3URLWithFilename:filename
              contentType:contentType
          completionHandler: ^(JSAPIAmazonS3Activity* output, NSError* error) {
                        if (output) {
                            NSLog(@"%@", output);
                        }
                        if (error) {
                            NSLog(@"Error calling JSAPIAmazonWebServicesS3Api->getSignedS3URL: %@", error);
                        }
                    }];
```

### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **filename** | **NSString***| The file name | [optional] 
 **contentType** | **NSString***| The content type | [optional] 

### Return type

[**JSAPIAmazonS3Activity***](JSAPIAmazonS3Activity.md)

### Authorization

[oauth2_client_credentials_grant](../README.md#oauth2_client_credentials_grant), [oauth2_password_grant](../README.md#oauth2_password_grant)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

