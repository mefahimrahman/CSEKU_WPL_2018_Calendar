<?php 
	
    include_once COMMON.'class.common.inc';
    include_once COMMON.'class.common.calendar.inc';


	echo "This Page is currently showing the calendar of another module CSEKU_18_Task and its slightly modified. This is used only for testing purpose. Later 'Day view/Week view/Month view' will be added.";
?>


	    <script>
		   function goLastMonth(month,year)
		   {
			   if(month==1)
			   {
				   --year;
				   month=13;
			   }
			   document.location.href="<?php $_SERVER['PHP_SELF'];?>?month="+(month-1)+"&year="+year;
			   
		   }
		   function goNextMonth(month,year)
		   {
			   if(month==12)
			   {
				   ++year;
				   month=0;
			   }
			   document.location.href="<?php $_SERVER['PHP_SELF'];?>?month="+(month+1)+"&year="+year;   
		   }  
		</script> 

	 
	<body>
	    <?php
		if(isset($_GET['day']))
		{  
	        $day=$_GET['day'];
		}
		else
		{
		    $day=date("j");
		}
		if(isset($_GET['month']))
		{  
	        $month=$_GET['month'];
		}
		else
		{
		    $month=date("n");
		}
		if(isset($_GET['year']))
		{  
	        $year=$_GET['year'];
		}
		else
		{
		    $year=date("Y");
		}
		
			//calender variable
			$currentTimeStamp=strtotime("$year-$month-$day");
			$monthName=date("F",$currentTimeStamp);
			$numDays=date("t",$currentTimeStamp);
			$counter=0;
		?>
		<div>
	        <table border="0">
			    <tr>
				    <td align="left"><input type='button' value='<--previous' name='previousbutton' onclick="goLastMonth(<?php echo $month.", ".$year; ?>)"></td>

					<td colspan='5' align="center"><strong><?php echo $monthName.", ".$year; ?></strong></td>

					<td align="right"><input type='button' value='next-->' name='nextbutton' onclick="goNextMonth(<?php echo $month.", ".$year; ?>)"></td>
				</tr>

				<tr bgcolor="#00FF00">
				    <td width='50px' height='25px' align="center">Sunday</td>
					<td width='50px' height='25px' align="center">Monday</td>
					<td width='50px' height='25px' align="center">Tueday</td>
					<td width='50px' height='25px' align="center">Wednesday</td>
					<td width='50px' height='25px' align="center">Thuesday</td>
					<td width='50px' height='25px' align="center" bgcolor="#ff0000">Friday</td>
					<td width='50px' height='25px' align="center" bgcolor="#ff0000">Satarday
					</td>
				</tr>

				<?php 	echo "<tr>";
				       	$day1=date("j");
					   		for($i=1;$i<$numDays+1;$i++,$counter++)
							{
						   		$timeStamp=strtotime("$year-$month-$i");
						   		if($i==1)
						   		{
									$firstDay=date("w",$timeStamp);
						       		for($j=0;$j<$firstDay;$j++,$counter++)
							   		{
							   			echo "<td>&nbsp;</td>"; //blank space
							   		}
						   		}

						   		if($counter %7 == 0)
								{
							   		echo "</tr><tr>";
						   		}
						   

						   		if($i == $day1)
						   		{
						   			echo "<td width='250px' height='50px' align='center' bgcolor = '#00FF00'>".$i."</td>";
						   		}
						   		else
						   		{
						   			echo "<td width='250px' height='50px' align='center' >". "<strong>" .$i. "</strong>" ."</td>";
						   		}
					   		}
						echo "</tr>";
				?>
			</table>
		</div>

		<div>
			<div>
				<table>
					<tr align="center">
						<td align="center">Event List</td>
					</tr>

				</table>
			</div>
		</div>