<?php 

	include_once COMMON.'class.common.inc';
    include_once COMMON.'class.common.calendar.inc';
	
	/*echo "This Page is For Adding Event"."<br><br>";*/
?>

<div class="panel panel-default">

    <div class="panel-heading" align="center"><b>Add Event</b></div>
    
    <div class="panel-body">

	<div id="form">
		<form method="post" class="form-horizontal">

			<div class="form-group">
              	<label class="control-label col-sm-4" for="txtUniversityID">Event Title:</label>
              	<div class="col-sm-6">
              	<input type="text" name="txtUniversityID" class="form-control" placeholder="New Event" required/>
			  	</div>
			</div>
	
			<div class="form-group">
              	<label class="control-label col-sm-4" for="txtFirstName">Event Date:</label>
              	<div class="col-sm-6">  		
				<input type="date" name="txtFirstName" class="form-control" required/>
				</div>
			</div>
			

			<div class="form-group">
              	<label class="control-label col-sm-4" for="selectDiscipline">Discipline:</label>
              	<div class="col-sm-6">	
						<select name="selectDiscipline" class="form-control" required>
							<option selected >Select Discipline</option>
							<option>Everyone</option>
							<option>Architecture</option>
							<option>CSE</option>
							<option>BBA</option>
							<option>URP</option>
							<!-- All Discipline List of KU will be here-->
						</select>
				</div>
			</div>	

	        <div class="form-group">        
            	<div class="col-sm-offset-2 col-sm-10">
					<button type="submit" value="request" name="request">Create Event</button>
			    </div>
            </div> 
		</form>

	</div>
	
<div id="toastME">Some Text Message..</div>
</div>

</div>
