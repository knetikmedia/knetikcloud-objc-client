#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGAffiliate.h"
#import "SWGCountry.h"
#import "SWGCurrency.h"
#import "SWGGroupMember.h"
#import "SWGLanguage.h"
#import "SWGProperty.h"
#import "SWGRole.h"
#import "SWGTimezone.h"
#import "SWGUserRelationship.h"
#import "SWGUserTag.h"


@protocol SWGUser
@end

@interface SWGUser : SWGObject


@property(nonatomic) NSDictionary<SWGProperty>* additionalProperties;

@property(nonatomic) NSString* address;

@property(nonatomic) NSString* address2;

@property(nonatomic) SWGAffiliate* affiliate;

@property(nonatomic) NSString* avatarUrl;

@property(nonatomic) NSArray<SWGUserRelationship>* children;

@property(nonatomic) NSString* city;

@property(nonatomic) SWGCountry* country;

@property(nonatomic) SWGCurrency* currency;

@property(nonatomic) NSNumber* dateCreated;

@property(nonatomic) NSNumber* dateOfBirth;

@property(nonatomic) NSNumber* dateUpdated;

@property(nonatomic) NSString* _description;

@property(nonatomic) NSString* displayName;

@property(nonatomic) NSString* email;

@property(nonatomic) NSString* firstName;

@property(nonatomic) NSString* fullname;

@property(nonatomic) NSString* gender;

@property(nonatomic) NSArray<SWGGroupMember>* groups;

@property(nonatomic) NSNumber* guest;

@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSString* inviteToken;

@property(nonatomic) SWGLanguage* lang;

@property(nonatomic) NSNumber* lastActivity;

@property(nonatomic) NSNumber* lastLogin;

@property(nonatomic) NSString* lastName;

@property(nonatomic) NSNumber* lockoutAttempts;

@property(nonatomic) NSNumber* lockoutDate;

@property(nonatomic) NSString* mobileNumber;

@property(nonatomic) NSNumber* oldId;

@property(nonatomic) NSArray<SWGUserRelationship>* parents;

@property(nonatomic) NSString* password;

@property(nonatomic) NSString* postalCode;

@property(nonatomic) NSString* propertiesString;

@property(nonatomic) NSArray<SWGRole>* roles;

@property(nonatomic) NSString* state;

@property(nonatomic) NSString* status;

@property(nonatomic) NSArray<NSString*>* tagStrings;

@property(nonatomic) NSArray<SWGUserTag>* tags;

@property(nonatomic) NSString* template;

@property(nonatomic) SWGTimezone* timezone;

@property(nonatomic) NSString* token;

@property(nonatomic) NSString* typeHint;

@property(nonatomic) NSString* username;

@end
