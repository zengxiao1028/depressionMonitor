//
//  Sensor.h
//  Zhang Proj
//
//  Created by Ian Bacus on 12/20/16.
//  Copyright © 2016 Ian Bacus. All rights reserved.
//

#import <Foundation/Foundation.h>


#ifndef Sensor_h
#define Sensor_h


@interface Sensor : NSObject
{
    //NSMutableDictionary * _dataTable;
    int publicCounter;
}

@property int protectedCounter;
@property NSString* _name;
@property NSMutableDictionary *dataTable;
@property BOOL isCollecting;

-(instancetype) initSensor;
-(NSDictionary*) flushData;
-(BOOL) startCollecting;
-(BOOL) stopCollecting;
-(BOOL) getStatus;

@end




#endif /* Sensor_h */
