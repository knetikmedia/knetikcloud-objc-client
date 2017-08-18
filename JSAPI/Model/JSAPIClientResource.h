#import <Foundation/Foundation.h>
#import "JSAPIObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol JSAPIClientResource
@end

@interface JSAPIClientResource : JSAPIObject

/* The expiration time of an initial oauth token in seconds [optional]
 */
@property(nonatomic) NSNumber* accessTokenValiditySeconds;
/* The client_id field of the oauth token request 
 */
@property(nonatomic) NSString* clientKey;
/* The oauth grant type as in: password (username/password auth), client_credentials (server-to-server, private clients), refresh_token (to allow clients to refresh their initial token), facebook, google, etc) See documentation for a complete list. Use dedicated endpoint PUT /grant-types to edit this list [optional]
 */
@property(nonatomic) NSArray<NSString*>* grantTypes;
/* Generated unique ID for the client [optional]
 */
@property(nonatomic) NSNumber* _id;
/* Set to true if the client is public i.e the secret key can be secured [optional]
 */
@property(nonatomic) NSNumber* isPublic;
/* Used to flag system clients that are not meant to be tinkered with [optional]
 */
@property(nonatomic) NSNumber* locked;
/* The friendly name of the client 
 */
@property(nonatomic) NSString* name;
/* A redirection URL to use when granting access to third-parties (seldomly used) [optional]
 */
@property(nonatomic) NSArray<NSString*>* redirectUris;
/* The expiration time of a refresh oauth token in seconds [optional]
 */
@property(nonatomic) NSNumber* refreshTokenValiditySeconds;
/* The client-secret field of the oauth request when creating a private client 
 */
@property(nonatomic) NSString* secret;

+ (NSDictionary *)modalDictionary;

@end