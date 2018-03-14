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


#import "JSAPIFileProperty.h"
#import "JSAPIProperty.h"
@protocol JSAPIFileProperty;
@class JSAPIFileProperty;
@protocol JSAPIProperty;
@class JSAPIProperty;



@protocol JSAPIFileGroupProperty
@end

@interface JSAPIFileGroupProperty : JSAPIProperty

/* The list of files [optional]
 */
@property(nonatomic) NSArray<JSAPIFileProperty>* files;


@end
