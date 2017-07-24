# JSAPIClientResource

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**accessTokenValiditySeconds** | **NSNumber*** | The expiration time of an initial oauth token in seconds | [optional] 
**clientKey** | **NSString*** | The client_id field of the oauth token request | 
**grantTypes** | **NSArray&lt;NSString*&gt;*** | The oauth grant type as in: password (username/password auth), client_credentials (server-to-server, private clients), refresh_token (to allow clients to refresh their initial token), facebook, google, etc) See documentation for a complete list. Use dedicated endpoint PUT /grant-types to edit this list | [optional] 
**_id** | **NSNumber*** | Generated unique ID for the client | [optional] 
**isPublic** | **NSNumber*** | Set to true if the client is public i.e the secret key can be secured | [optional] 
**locked** | **NSNumber*** | Used to flag system clients that are not meant to be tinkered with | [optional] 
**name** | **NSString*** | The friendly name of the client | 
**redirectUris** | **NSArray&lt;NSString*&gt;*** | A redirection URL to use when granting access to third-parties (seldomly used) | [optional] 
**refreshTokenValiditySeconds** | **NSNumber*** | The expiration time of a refresh oauth token in seconds | [optional] 
**secret** | **NSString*** | The client-secret field of the oauth request when creating a private client | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


