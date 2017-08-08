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


#import "JSAPIProperty.h"
#import "JSAPIUserRelationshipReferenceResource.h"
@protocol JSAPIProperty;
@class JSAPIProperty;
@protocol JSAPIUserRelationshipReferenceResource;
@class JSAPIUserRelationshipReferenceResource;



@protocol JSAPIUserResource
@end

@interface JSAPIUserResource : JSAPIObject

/* A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this user type, or be an extra not from the template [optional]
 */
@property(nonatomic) NSDictionary<JSAPIProperty>* additionalProperties;
/* The first line of the user's address (private) [optional]
 */
@property(nonatomic) NSString* address;
/* The second line of user's address (private) [optional]
 */
@property(nonatomic) NSString* address2;
/* The url of the user's avatar image [optional]
 */
@property(nonatomic) NSString* avatarUrl;
/* Relationships where this user is the parent. Read-Only, manage through separate endpoints [optional]
 */
@property(nonatomic) NSArray<JSAPIUserRelationshipReferenceResource>* children;
/* The user's city (private) [optional]
 */
@property(nonatomic) NSString* city;
/* The ISO3 code for the country from the user's address (private). Will be filled in based on GeoIP country at registration if not provided. [optional]
 */
@property(nonatomic) NSString* countryCode;
/* The code for the user's real money currency (private) [optional]
 */
@property(nonatomic) NSString* currencyCode;
/* The user's date of birth (private) as a unix timestamp [optional]
 */
@property(nonatomic) NSNumber* dateOfBirth;
/* The user's self description (private) [optional]
 */
@property(nonatomic) NSString* _description;
/* The chosen display name of the user, defaults to username if not present [optional]
 */
@property(nonatomic) NSString* displayName;
/* The user's email address (private). May be required and/or unique depending on system configuration (both on by default). Must match standard email requirements if provided (RFC 2822) 
 */
@property(nonatomic) NSString* email;
/* The user's first name (private) [optional]
 */
@property(nonatomic) NSString* firstName;
/* The user's full name (private) [optional]
 */
@property(nonatomic) NSString* fullname;
/* The user's gender (private) [optional]
 */
@property(nonatomic) NSString* gender;
/* The id of the user [optional]
 */
@property(nonatomic) NSNumber* _id;
/* The ISO3 code for the user's currency (private) [optional]
 */
@property(nonatomic) NSString* languageCode;
/* The date the user last interacted with the API (private) [optional]
 */
@property(nonatomic) NSNumber* lastActivity;
/* The user's last name (private) [optional]
 */
@property(nonatomic) NSString* lastName;
/* The date the user's info was last updated as a unix timestamp [optional]
 */
@property(nonatomic) NSNumber* lastUpdated;
/* The user's date of registration as a unix timestamp [optional]
 */
@property(nonatomic) NSNumber* memberSince;
/* The user's mobile phone number (private) [optional]
 */
@property(nonatomic) NSString* mobileNumber;
/* Relationships where this user is the child. Read-Only, manage through separate endpoints [optional]
 */
@property(nonatomic) NSArray<JSAPIUserRelationshipReferenceResource>* parents;
/* The plain text password for the new user account. Required for registration; ignored on profile update.  Use password specific endpoints for editing [optional]
 */
@property(nonatomic) NSString* password;
/* The user's postal code (private) [optional]
 */
@property(nonatomic) NSString* postalCode;
/* The user's state (private) [optional]
 */
@property(nonatomic) NSString* state;
/* Tags on the user. Can only be set by admin. Max length per tag is 64 characters [optional]
 */
@property(nonatomic) NSArray<NSString*>* tags;
/* A user template this user is validated against (private). May be null and no validation of properties will be done [optional]
 */
@property(nonatomic) NSString* template;
/* The code for the user's timezone (private) [optional]
 */
@property(nonatomic) NSString* timezoneCode;
/* The login username for the user (private). May be set to match email if system does not require usernames separately. 
 */
@property(nonatomic) NSString* username;

+ (NSDictionary *)modalDictionary;

@end
