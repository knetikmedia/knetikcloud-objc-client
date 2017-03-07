#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation latest 
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
*
* OpenAPI spec version: latest 
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGGroup.h"
#import "SWGProperty.h"


@protocol SWGGroup
@end

@interface SWGGroup : SWGObject


@property(nonatomic) NSDictionary<SWGProperty>* additionalProperties;

@property(nonatomic) NSString* _description;

@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSNumber* memberCount;

@property(nonatomic) NSString* messageOfTheDay;

@property(nonatomic) NSString* name;

@property(nonatomic) SWGGroup* parent;

@property(nonatomic) NSString* propertiesString;

@property(nonatomic) NSString* status;

@property(nonatomic) NSNumber* subMemberCount;

@property(nonatomic) NSString* template;

@property(nonatomic) NSString* uniqueName;

@end
