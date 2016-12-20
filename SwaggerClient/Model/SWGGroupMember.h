#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Knetik Platform API Documentation Latest
* This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://demo.sandbox.knetikcloud.com
*
* OpenAPI spec version: Latest
* Contact: support@knetik.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGGroup.h"
#import "SWGUser.h"


@protocol SWGGroupMember
@end

@interface SWGGroupMember : SWGObject


@property(nonatomic) SWGGroup* group;

@property(nonatomic) NSNumber* secondary;

@property(nonatomic) NSString* status;

@property(nonatomic) SWGUser* user;

@end
